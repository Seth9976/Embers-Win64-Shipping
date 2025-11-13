// 函数: sub_141f4df50
// 地址: 0x141f4df50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t rbx = sx.q(arg1[0x1b].d)
int64_t rdi = 0
int32_t var_40 = 0
void* rdx = nullptr
void* var_48 = nullptr
int32_t var_3c = 0x18
int64_t rbp
rbp.b = 1
int32_t r9 = 0
int32_t rax_2 = 0
void var_108

if (rbx.d != 0)
    if (rbx.d s> 0x18)
        sub_141dd5f20(&var_108, rbx.d)
        r9 = var_40
        rdx = var_48
    
    void* rcx_1 = &var_108
    
    if (rdx != 0)
        rcx_1 = rdx
    
    memcpy(rcx_1 + (sx.q(r9) << 3), arg1[0x1a], (rbx << 3).d)
    rdx = var_48
    rax_2 = var_40 + rbx.d
    int32_t var_40_1 = rax_2

void* rsi = &var_108

if (rdx != 0)
    rsi = rdx

int64_t r14 = sx.q(rax_2) << 3
uint64_t r14_1 = r14 u>> 3

if (rsi u> rsi + r14)
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rbx_1 = *rsi
        
        if (rbx_1 != 0)
            uint8_t rax_8
            
            if (rbx_1[0x2f].d s<= 0)
                if (data_143a2d7b4 == 1)
                    rax_8 = *(rbx_1 + 0x14c)
                
                if (data_143a2d7b4 != 1 || (rax_8 & 2) == 0)
                    char rax_10 = (*(*rbx_1 + 0x468))(rbx_1, 0, zx.q(arg3), 0)
                    *(rbx_1 + 0x14c) ^= ((rax_10 * 2) ^ *(rbx_1 + 0x14c)) & 2
                    rax_8 = *(rbx_1 + 0x14c)
            else
                void* rdx_3 = *(rbx_1[0x2e] + (sx.q(rbx_1[0x2f].d) << 3) - 8)
                *(rdx_3 + 0x350) |= 2
                *(rdx_3 + 0x10) = 3
                *(rdx_3 + 0x74) = 0xffffffff
                rax_8 = *(rbx_1 + 0x14c)
            
            rbp.b &= rax_8 u>> 1 & 1
        
        rsi += 8
        rdi += 1
    while (rdi != r14_1)
    
    rdx = var_48

if ((*(arg1 + 0x14d) & 2) != 0)
    (*(*arg1 + 0x4a8))(arg1, zx.q(arg3))
    rdx = var_48
    rbp.b = 0

if (rdx != 0)
    sub_140a74f90(rdx)

__security_check_cookie(rax_1 ^ &var_128)
return zx.q(rbp.b)
