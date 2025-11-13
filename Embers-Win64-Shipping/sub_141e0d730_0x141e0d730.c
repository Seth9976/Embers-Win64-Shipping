// 函数: sub_141e0d730
// 地址: 0x141e0d730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_38 = zmm6
int128_t zmm7 = arg2
bool cond:0 = (sub_140b5b8a0(arg3.d, 0) == 0 | arg3:4.d != 0) == 0
uint64_t result = zx.q(*(arg1 + 0x80))
void var_78

if (cond:0)
    int32_t i = 0
    
    if (result.d s> 0)
        int64_t rdi_2 = 0
        zmm6 = zx.o(0)
        
        do
            result = *(arg1 + 0x78)
            void** rbx_1 = *(rdi_2 + result)
            
            if (rbx_1 != 0)
                void* rdx_2 = *rbx_1
                
                if (rdx_2 == 0 || zmm6.d f== rbx_1[0x2a].d)
                    result.b = 0
                else
                    result.b = 1
                
                if (result.b != 0)
                    int64_t* rax_2
                    rax_2, zmm7 = sub_141ddd680(&var_78, rdx_2 + 0xe0, zmm7.d)
                    result, zmm6 = sub_141e31c70(rbx_1, rax_2, 1)
            
            i += 1
            rdi_2 += 8
        while (i s< *(arg1 + 0x80))
else
    int32_t i_1 = 0
    
    if (result.d s> 0)
        zmm6 = zx.o(0)
        int64_t r13_1 = 0
        
        do
            result = *(arg1 + 0x78)
            int64_t* r14_1 = *(result + r13_1)
            
            if (r14_1 != 0)
                void* rsi_1 = *r14_1
                
                if (rsi_1 != 0 && not(zmm6.d f== r14_1[0x2a].d) && r14_1[5].b != 0)
                    int64_t rdi_1 = *(rsi_1 + 0x20)
                    result = sub_140cde0b0()
                    
                    if (rdi_1 == result)
                        result = sx.q(*(rsi_1 + 0x160))
                        int64_t rcx_1 = 0
                        
                        if (result.d s> 0)
                            uint64_t result_1 = result
                            result = *(rsi_1 + 0x158)
                            
                            do
                                if (result != 0 && *result == arg3)
                                    int64_t* rax_1
                                    rax_1, zmm7 = sub_141ddd6c0(&var_78, zmm7.d)
                                    result, zmm6 = sub_141e31c70(r14_1, rax_1, 1)
                                    break
                                
                                rcx_1 += 1
                                result += 0x18
                            while (rcx_1 s< result_1)
            
            i_1 += 1
            r13_1 += 8
        while (i_1 s< *(arg1 + 0x80))
return result
