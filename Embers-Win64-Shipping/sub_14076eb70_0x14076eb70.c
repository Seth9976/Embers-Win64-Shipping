// 函数: sub_14076eb70
// 地址: 0x14076eb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1d0) = arg3
int32_t result = 0
*(arg1 + 0x1cc) = arg2

if (0 == *(arg1 + 0x210))
    *(arg1 + 0x210) = 0
else
    result = *(arg1 + 0x210)

int32_t rdi_1 = result * *(arg1 + 0x1cc)

if (rdi_1 != 0)
    void* var_50_1 = arg1
    
    if (sub_140a80f40() == 0)
        uint32_t rax_1
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_1.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_1.b == 0))
            void var_38
            void** rax_2 = sub_140750ce0(&var_38, nullptr, 0xff)
            *(*rax_2 + 0x10) = rdi_1.o
            void* rcx_6 = *rax_2
            int32_t r8_2 = rax_2[2].d
            int64_t* rdx_1 = rax_2[1]
            int64_t* rbx_1 = *(rcx_6 + 0x28)
            int64_t* arg_8 = rbx_1
            void* rdi_2 = &rbx_1[9]
            
            if (rbx_1 != 0)
                *rdi_2 += 1
                rbx_1 = arg_8
            
            result = sub_1405e48c0(rcx_6, rdx_1, r8_2, 1)
            
            if (rbx_1 != 0)
                result = *rdi_2
                *rdi_2 -= 1
                
                if (result == 1)
                    result = sub_140a2f6e0(arg_8)
        else
            int128_t var_48 = rdi_1.o
            result = sub_140748150(&var_48)
    else
        if (*(arg1 + 0x208) u> 0)
            *(arg1 + 0x208) = 0
            sub_1405d16e0(arg1 + 0x1f8, nullptr)
            sub_1405d16e0(arg1 + 0x200, nullptr)
        
        result = sub_14076dc30(arg1 + 0x1f8, 4, rdi_1, 0xd, 1, 0)
    
    int64_t rbx_2 = sx.q(*(arg1 + 0x220))
    
    if (rbx_2.d s< 0x10000)
        *(arg1 + 0x220) = 0x10000
        
        if (*(arg1 + 0x224) s< 0x10000)
            sub_140775270(arg1 + 0x218)
        
        return memset(*(arg1 + 0x218) + (rbx_2 << 2), 0, sx.q(0x10000 - rbx_2.d) << 2) __tailcall
    
    if (rbx_2.d s> 0x10000)
        result = (rbx_2 - 0x10000).d
        
        if (result != 0)
            *(arg1 + 0x220) = rbx_2.d - result
            return sub_1407758e0(arg1 + 0x218)

return result
