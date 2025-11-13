// 函数: sub_1417a45c0
// 地址: 0x1417a45c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = 0
int64_t* r9_2 = (sx.q(*(**arg1 + (sx.q(arg2) << 2))) << 4) + *(arg1[1] + 0x198)
int64_t var_28 = 0
int64_t rbx = sx.q(r9_2[1].d)
int64_t rdi = *r9_2
int32_t var_20 = rbx.d

if (rbx.d != 0)
    sub_1405c4a00(&var_28, rbx.d, 0)
    memcpy(var_28, rdi, (rbx << 3).d)
    r10 = var_28
    rbx = zx.q(var_20)
else
    int32_t var_1c_1 = 0

int32_t rdi_1 = (rbx - 1).d

if (rdi_1 s>= 0)
    int64_t rsi_1 = sx.q(rdi_1) << 3
    int64_t r14_1 = rsi_1
    
    while (true)
        int64_t* rax_3 = *(rsi_1 + r10)
        int64_t* r9_3 = nullptr
        
        if (*(rax_3 + 0xc) u>= 2)
            r9_3 = rax_3
        
        int64_t rcx_2
        void* r8_3
        
        if (r9_3 != 0)
            r8_3 = *r9_3
            rcx_2 = sx.q(r9_3[1].d)
        
        if (r9_3 == 0 || *(rcx_2 + *(r8_3 + 0x398)) != 4 || *(rcx_2 + *(r8_3 + 0x368)) != 0)
            int32_t rax_17 = rbx.d - rdi_1 - 1
            
            if (rax_17 s>= 1)
                rax_17 = 1
            
            if (rax_17 != 0)
                memcpy(r14_1 + r10, r10 + (sx.q(rbx.d - rax_17) << 3), rax_17 << 3)
                rbx = zx.q(var_20)
            
            var_20 = rbx.d - 1
            sub_1405c53d0(&var_28)
        else
            int64_t rax_6 = *(r8_3 + 0x28)
            int64_t rdx_3 = rcx_2 * 3
            int64_t rcx_3 = *(r8_3 + 0x3c8)
            *(rcx_3 + (rdx_3 << 2)) = *(rax_6 + (rdx_3 << 2))
            *(rcx_3 + (rdx_3 << 2) + 8) = *(rax_6 + (rdx_3 << 2) + 8)
            void* rax_8 = *r9_3
            int64_t r8_5 = sx.q(r9_3[1].d) * 2
            *(*(rax_8 + 0x3e0) + (r8_5 << 3)) = *(*(rax_8 + 0x68) + (r8_5 << 3))
            int64_t r8_6 = sx.q(r9_3[1].d) * 3
            void* rax_10 = *r9_3
            int64_t rcx_5 = *(rax_10 + 0x3f8)
            int64_t rdx_5 = *(rax_10 + 0x1b8)
            *(rdx_5 + (r8_6 << 2)) = *(rcx_5 + (r8_6 << 2))
            *(rdx_5 + (r8_6 << 2) + 8) = *(rcx_5 + (r8_6 << 2) + 8)
            int64_t r8_7 = sx.q(r9_3[1].d) * 3
            void* rax_13 = *r9_3
            int64_t rcx_6 = *(rax_13 + 0x410)
            int64_t rdx_6 = *(rax_13 + 0x1d0)
            *(rdx_6 + (r8_7 << 2)) = *(rcx_6 + (r8_7 << 2))
            *(rdx_6 + (r8_7 << 2) + 8) = *(rcx_6 + (r8_7 << 2) + 8)
        
        r14_1 -= 8
        rsi_1 -= 8
        int32_t temp0_1 = rdi_1
        rdi_1 -= 1
        
        if (temp0_1 - 1 s< 0)
            break
        
        rbx = zx.q(var_20)
        r10 = var_28

void* rcx_9 = arg1[1]
int64_t* arg_8 = &var_28
int64_t* result = sub_1417913f0(rcx_9, &arg_8, *arg1[2])
int64_t rcx_10 = var_28

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
