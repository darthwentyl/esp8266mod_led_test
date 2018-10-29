namespace wifi {

class SocketMngr 
{
public:
    SocketMngr();
    ~SocketMngr() = default;
    
    SocketMngr(const SocketMngr&) = delete;
    SocketMngr& operator = (const SocketMngr&) = delete;
    SocketMngr(SocketMngr&&) = delete;
    SocketMngr& operator = (SocketMngr&&) = delete;
    
private:
    int socket;
};

} // wifi
