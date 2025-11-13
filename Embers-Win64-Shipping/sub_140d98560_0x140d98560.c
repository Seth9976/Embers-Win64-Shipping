// 函数: sub_140d98560
// 地址: 0x140d98560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        rbx[1].d = rax_1 + 1

int64_t* rsi = nullptr

if (rbx != 0)
    rsi = *arg2

int64_t rdi = sx.q(rsi[1].d)
int32_t rax_3 = (rdi + 1).d
rsi[1].d = rax_3

if (rax_3 s> *(rsi + 0xc))
    sub_1407755b0(rsi)

int64_t* arg_8 = rsi
int64_t* result = rdi * 0x58 + *rsi
*result = 0
result[1] = 0x3f800000
result[2].d = 0
*(result + 0x14) = 0x3f800000
*(result + 0x1c) = 0
result[7] = 0
result[8].d = 0xffffffff
result[0xa].b |= 1
sub_140d8b3c0(arg1 + 0x48, &arg_8)
int64_t rax_4 = sx.q(arg3[1].d)

if (rax_4.d s> 0)
    int64_t rdx_2 = sx.q(*(*arg3 + (rax_4 << 2) - 4))
    
    if (rdx_2.d != 0xffffffff)
        int64_t rdx_3 = rdx_2 << 6
        
        if (rdx_3 != neg.q(arg3[2]))
            int64_t* rax_6 = sub_140da0e20(arg1, rdx_3 + arg3[2])
            void* rsi_1 = rsi[6]
            int64_t rbp_1 = sx.q(*(rsi_1 + 0x18))
            int32_t rax_7 = (rbp_1 + 1).d
            *(rsi_1 + 0x18) = rax_7
            
            if (rax_7 s> *(rsi_1 + 0x1c))
                sub_140dbce10(rsi_1, rbp_1.d)
            
            void* rax_8 = *(rsi_1 + 0x10)
            
            if (rax_8 != 0)
                rsi_1 = rax_8
            
            void* rsi_2 = rsi_1 + (rbp_1 << 4)
            *rsi_2 = *rax_6
            void* rax_12 = rax_6[1]
            *(rsi_2 + 8) = rax_12
            
            if (rax_12 != 0)
                *(rax_12 + 8) += 1
            
            result[7] = *rax_6
            result[8].d = 0xffffffff

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t rdx_6 = *rbx
        (*rdx_6)(rbx, rdx_6)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8 = *rbx
            (*(r8 + 8))(rbx, 1, r8)

return result
