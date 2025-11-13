// 函数: sub_140ab3cc0
// 地址: 0x140ab3cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140abd990(arg2)
int64_t* rcx_1 = *arg2
int16_t rsi = 0
uint64_t result

if (*((*(*rcx_1 + 0x10))(rcx_1) + 8) s<= 1 || ((arg2[2].d u>> 1).b & 1) != 0)
    result = 0
else
    int64_t* rcx_2 = *arg2
    result = (*(*rcx_2 + 0x40))(rcx_2)

if (arg1[2].w == result.w)
    int64_t* rcx_3 = *arg2
    
    if (*((*(*rcx_3 + 0x10))(rcx_3) + 8) s> 1 && ((arg2[2].d u>> 1).b & 1) == 0)
        int64_t* rcx_4 = *arg2
        rsi = (*(*rcx_4 + 0x48))(rcx_4).w
    
    if (*(arg1 + 0x12) == rsi)
        int64_t* rdi_1 = *arg1
        
        if (rdi_1 != 0)
            sub_140abd990(arg2)
            int64_t* rcx_6 = *arg2
            int64_t* rax_9 = (*(*rcx_6 + 0x10))(rcx_6)
            int64_t rdx = *rdi_1
            void** rax_10 = (*(rdx + 0x10))(rdi_1, rdx)
            void* rcx_8 = &data_142d40450
            int16_t* const r8_1
            
            if (rax_9[1].d == 0)
                r8_1 = &data_142d40450
            else
                r8_1 = *rax_9
            
            if (rax_10[1].d != 0)
                rcx_8 = *rax_10
            
            void* r8_2 = r8_1 - rcx_8
            uint32_t rdx_1
            
            do
                rdx_1 = zx.d(*rcx_8)
                result = zx.q(*(rcx_8 + r8_2))
                
                if (rdx_1 != result.d)
                    break
                
                rcx_8 += 2
            while (result.d != 0)
            
            if (rdx_1 - result.d == 0)
                result.b = 1
                return result

result.b = 0
return result
