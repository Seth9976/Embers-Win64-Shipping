// 函数: sub_14177e3e0
// 地址: 0x14177e3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* i = *(arg1 + 0x98)
void* rsi = arg1

for (void* rdi_2 = &i[sx.q(*(arg1 + 0xa0)) * 2]; i != rdi_2; i = &i[2])
    i[1].d = 0
    
    if (*(i + 0xc) s<= 0xffffffff)
        sub_1405dadb0(i, 0)

int64_t var_68 = arg2
int64_t* var_60
__builtin_memset(&var_60, 0, 0x15)
int32_t var_48 = 0
uint32_t result = sub_141750820(&var_68)
void* i_2
void* i_1 = i_2

while (i_1 != 0)
    uint32_t result_1
    int64_t result_2 = sx.q(result_1)
    int64_t rbx = sx.q(*(*(i_1 + 0x350) + (result_2 << 2)))
    
    if (rbx.d s>= 0)
        int32_t arg_10
        sub_140865c40(rsi + 0x38, &arg_10, *(*(i_1 + 0xc8) + (result_2 << 3)))
        int64_t rax_1 = sx.q(arg_10)
        void* const rcx_3
        
        if (rax_1.d == 0xffffffff)
            rcx_3 = nullptr
        else
            rcx_3 = *(rsi + 0x38) + rax_1 * 0x18
        
        int64_t r14_1 = 0
        void* rdx_2 = arg1
        int64_t* rax_5 = (sx.q(*(rcx_3 + 8)) << 5) + *(rdx_2 + 8)
        rax_5[3].d = rbx.d
        int32_t* rsi_1 = *rax_5
        uint64_t rcx_5 = sx.q(rax_5[1].d) << 2 u>> 2
        
        if (rsi_1 u> &rsi_1[rax_5[1]])
            rcx_5 = 0
        
        if (rcx_5 != 0)
            do
                int32_t r12_1 = *rsi_1
                int64_t* rbx_2 = *(rdx_2 + 0x98) + (rbx << 4)
                int64_t rdi_3 = sx.q(rbx_2[1].d)
                int32_t rax_8 = (rdi_3 + 1).d
                rbx_2[1].d = rax_8
                
                if (rax_8 s> *(rbx_2 + 0xc))
                    sub_1405a4cf0(rbx_2)
                    rdx_2 = arg1
                
                rsi_1 = &rsi_1[1]
                r14_1 += 1
                *(*rbx_2 + (rdi_3 << 2)) = r12_1
            while (r14_1 != rcx_5)
            
            i_1 = i_2
        
        rsi = arg1
    
    int64_t* rdx_4 = var_60
    
    if (rdx_4 != 0)
        int32_t var_40
        int32_t rax_12 = var_40 + 1
        var_40 = rax_12
        
        if (rax_12 s>= rdx_4[1].d)
        label_14177e56e:
            var_48 += 1
            result = sub_141750820(&var_68)
            i_1 = i_2
        else
            int64_t* rdx_5 = *(*rdx_4 + (sx.q(rax_12) << 3))
            void* rcx_9 = *rdx_5
            int32_t var_70_1 = rdx_5[1].d
            
            if (rcx_9 == 0)
                result = 0
                char var_6c_2 = 0
                i_2.o = rcx_9.o
            else
                result = zx.d(*(rcx_9 + 0x40))
                char var_6c_1 = result.b
                i_2.o = rcx_9.o
            
            i_1 = i_2
    else
        result = result_1 + 1
        result_1 = result
        int32_t var_44
        
        if (result s>= var_44)
            goto label_14177e56e

return result
