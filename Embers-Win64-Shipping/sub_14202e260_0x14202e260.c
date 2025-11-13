// 函数: sub_14202e260
// 地址: 0x14202e260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *arg2
void* rax_1
int64_t rax_2
void* rdx

if (rsi != 0)
    rax_1 = sub_14256a090()
    rdx = rsi[2]
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rsi == 0 || rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rsi = nullptr
else if (rsi[0x53] != 0)
    void arg_10
    int64_t* rax_5 = (*(*arg1 + 0x710))(arg1, &arg_10, rsi)
    int64_t rbp_2
    
    if (*rax_5 == 0)
        rbp_2 = 0
    else
        void* rax_6 = sub_14256a090()
        
        if (rax_6 == 0)
            rbp_2 = 0
        else
            rbp_2 = *rax_5
            int64_t rax_7 = sx.q(*(rax_6 + 0x38))
            
            if (rax_7.d s> *(rbp_2 + 0x38) || *(*(rbp_2 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
                rbp_2 = 0
    
    char rax_10
    
    if ((*(rsi + 0x294) & 2) != 0)
        rax_10 = (*(*rsi + 0x6a8))(rsi)
    
    int64_t r12
    
    if ((*(rsi + 0x294) & 2) == 0 || rax_10 == 0)
        r12.b = 1
    else
        r12.b = 0
    
    int64_t rdi_1 = *arg1
    void var_48
    int64_t rax_12 = (*(*rsi + 0x660))(rsi, &var_48)
    int64_t r8_3 = *rsi
    void var_3c
    int64_t* rax_14 = (*(rdi_1 + 0x7f8))(arg1, zx.q(zx.d(r12.b) + 1), 
        (*(r8_3 + 0xd38))(rsi, &var_3c, r8_3), rax_12, rbp_2)
    
    if (rax_14 == 0)
        return sub_141dbe590(rsi, 0, 1) __tailcall
    
    int64_t r8_6 = *rsi
    (*(r8_6 + 0xaf0))(rsi, rax_14, r8_6)
    int64_t r8_7 = *rax_14
    (*(r8_7 + 0xaf8))(rax_14, rsi, r8_7)
    int64_t r9_2 = *arg1
    (*(r9_2 + 0x708))(arg1, rsi, rax_14, r9_2)
    rsi = rax_14
    *arg2 = rax_14

(*(*arg1 + 0x7f0))(arg1, *arg2)
int64_t result = (*(*arg1 + 0x7c8))(arg1, *arg2)

if (rsi == 0)
    return result

return sub_1424b2750(arg1, rsi)
