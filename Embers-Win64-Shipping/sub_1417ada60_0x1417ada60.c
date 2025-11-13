// 函数: sub_1417ada60
// 地址: 0x1417ada60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg2 + 0xc)
int64_t* rdi = nullptr
int64_t* rsi = nullptr
int64_t* rbx = arg1

if (rax u>= 2)
    rsi = arg2

if (rsi == 0)
    if (rax u>= 1)
        rdi = arg2
    
    void* rdx_7
    
    if (rdi == 0)
        rdx_7 = *arg1
    else
        rdx_7 = arg1[2]
    
    sub_1417b1460(arg2, rdx_7)
else
    int32_t* r14_1 = nullptr
    *(sx.q(rsi[1].d) + *(*rsi + 0x368)) = 0
    char result = *(arg2 + 0xc)
    
    if (result u>= 3)
        r14_1 = arg2
    
    if (r14_1 == 0)
        char r14_2 = *(sx.q(rsi[1].d) + *(*rsi + 0x398))
        int32_t* rcx_5 = nullptr
        char rax_8 = *(rsi + 0xc)
        
        if (r14_2 == 4)
            if (rax_8 u>= 2)
                rcx_5 = rsi
            
            sub_1417911c0(rcx_5, &rbx[0x12], &rbx[0x1c])
        else
            if (rax_8 u>= 2)
                rcx_5 = rsi
            
            sub_14179c500(rcx_5, &rbx[0x12], &rbx[0x1c])
        
        void* rdx_4
        
        if (r14_2 == 2)
            rdx_4 = rbx[5]
        else
            rdx_4 = rbx[4]
        
        sub_1417b1460(rsi, rdx_4)
        sub_14175b460(rbx)
    else
        if (result == 6)
            rbx[0x11].b = 1
            return result
        
        sub_1417911c0(r14_1, &rbx[0x2a], &rbx[0x34])
        
        if (*(sx.q(rsi[1].d) + *(*rsi + 0x398)) != 1 && sub_141745660(arg2) == 4)
            sub_1417911c0(r14_1, &rbx[0x1e], &rbx[0x28])
    
    if (*(sx.q(rsi[1].d) + *(*rsi + 0x398)) != 1)
        int64_t* rax_11 = nullptr
        
        if (*(arg2 + 0xc) u>= 1)
            rax_11 = arg2
        
        if (rax_11 != 0)
            if (*(rax_11 + 0xc) u>= 2)
                rdi = rax_11
            
            if (rdi != 0 && *(sx.q(rdi[1].d) + *(*rdi + 0x398)) == 4)
                sub_1417911c0(rsi, &rbx[0x12], &rbx[0x1c])

return sub_14175b460(rbx)
