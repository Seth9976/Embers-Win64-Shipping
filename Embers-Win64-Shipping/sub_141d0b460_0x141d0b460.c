// 函数: sub_141d0b460
// 地址: 0x141d0b460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t r15 = *(arg1 + 0xb0)
int64_t r9 = 0
int64_t var_88 = r15
int64_t rbp = arg3
int64_t var_98 = 0
void* r8 = arg1
int64_t rax_1
int16_t rdx
rdx:rax_1 = sx.o(r15)
arg2[1].d = 0
int64_t r12 = r15
int32_t rax_3 = ((rax_1 + zx.q(rdx)) s>> 0x10).d
int32_t r10 = rax_3
int64_t rax_7
int16_t rdx_2
rdx_2:rax_7 = sx.o(r15 - (sx.q(rax_3) << 0x10) + rbp)
int64_t i = ((zx.q(rdx_2) + rax_7) s>> 0x10) + 1
int64_t i_1 = i

if (*(arg2 + 0xc) != i.d)
    sub_1405c5660(arg2, i.d)
    r8 = arg1
    r9 = 0
    r10 = rax_3

if (i s> 0)
    int32_t r13_1 = r10
    
    do
        int64_t rcx_3 = r15
        int32_t rax_11
        
        if (rbp s<= 0)
            rax_11 = r13_1
        else
            int64_t rax_9
            int16_t rdx_4
            rdx_4:rax_9 = sx.o(r12)
            rax_11 = ((rax_9 + zx.q(rdx_4)) s>> 0x10).d
        
        r15 = r12
        int64_t rdi_1 = rbp
        
        if (rbp s<= 0)
            r15 = rcx_3
        
        int64_t rsi_2 = sx.q(rax_11) << 0x10
        
        if (r15 + rbp s> rsi_2 + 0x10000)
            rdi_1 = rsi_2 - r15 + 0x10000
        
        int64_t var_60_1 = r9
        int32_t* var_78_1
        
        if (*(r8 + 0xcc) != r13_1)
            uint64_t r14_4
            
            if (r13_1 != *(r8 + 0x90) - 1)
                r14_4 = 0x10000
            else
                int16_t rax_19
                int16_t rdx_6
                rdx_6:rax_19 = sx.o(*(r8 + 0xa0))
                uint64_t rdx_7 = zx.q(rdx_6)
                uint64_t r14_3 = zx.q(rax_19 + rdx_7.w)
                r14_4 = r14_3 - rdx_7
                
                if (r14_3 == rdx_7)
                    r14_4 = 0x10000
            
            void* rbp_1 = *(r8 + 0xb8)
            int32_t rax_21 = sub_140a2d3e0(rbp_1 + 0x150)
            int32_t* rbx_1 = nullptr
            
            if (rax_21 != 0)
                rbx_1 = *(*(&data_143cf0bf8 + (zx.q(rax_21) u>> 0xe << 3))
                    + (zx.q(rax_21) & 0x3fff) * 0x18 + 8)
                sub_140a24050(rax_21)
            
            if (rbx_1 == 0)
                int32_t* rax_22 = j_sub_140a82f30(zx.q((&rbx_1[0xc]).d))
                rbx_1 = rax_22
                
                if (rax_22 == 0)
                    rbx_1 = nullptr
                else
                    *rax_22 = 0xffffffff
                    __builtin_memset(&rax_22[2], 0, 0x28)
            
            *rbx_1 = r13_1
            *(rbx_1 + 8) = rsi_2
            *(rbx_1 + 0x10) = r14_4
            *(rbx_1 + 0x18) = 0
            rbx_1[8] = 0
            rbx_1[9] = 2
            *(rbx_1 + 0x28) = arg4
            EnterCriticalSection(rbp_1 + 0x100)
            int64_t r14_5 = sx.q(*(rbp_1 + 0xf8))
            int32_t rax_24 = (r14_5 + 1).d
            *(rbp_1 + 0xf8) = rax_24
            
            if (rax_24 s> *(rbp_1 + 0xfc))
                sub_1405a4d70(rbp_1 + 0xf0)
            
            *(*(rbp_1 + 0xf0) + (r14_5 << 3)) = rbx_1
            *(rbp_1 + 0x128) += 1
            LeaveCriticalSection(rbp_1 + 0x100)
            int64_t* rcx_14 = *(rbp_1 + 0x130)
            
            if (rcx_14 != 0)
                (*(*rcx_14 + 0x10))(rcx_14)
            
            rbp = arg_18
            i = i_1
            r9 = var_98
            r10 = rax_3
            int64_t var_70_2 = 0
            r12 = var_88
            var_78_1 = rbx_1
        else
            var_78_1 = nullptr
            void* var_70_1 = r8 + 0xc0
        
        int64_t rbx_3 = sx.q(arg2[1].d)
        int32_t rax_27 = (rbx_3 + 1).d
        arg2[1].d = rax_27
        
        if (rax_27 s> *(arg2 + 0xc))
            sub_1405c4ec0(arg2)
            r9 = var_98
            r10 = rax_3
        
        int64_t rax_28 = *arg2
        int64_t rcx_16 = rbx_3 * 5
        r8 = arg1
        r13_1 += 1
        r12 += rdi_1
        r9 += rdi_1
        *(rax_28 + (rcx_16 << 3)) = var_78_1.o
        rbp -= rdi_1
        var_88 = r12
        *(rax_28 + (rcx_16 << 3) + 0x10) = (r15 - rsi_2).o
        var_98 = r9
        *(rax_28 + (rcx_16 << 3) + 0x20) = rdi_1
        arg_18 = rbp
    while (sx.q(r13_1 - r10) s< i)

return i
