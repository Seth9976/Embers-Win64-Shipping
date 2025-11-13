// 函数: sub_14244eed0
// 地址: 0x14244eed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dd1530(arg1)

if ((*(arg1 + 8) & 0x80410) == 0)
    int64_t* arg_8
    sub_141deba20(&arg_8)
    
    if (arg_8 != 0)
        void* rax_1 = sub_142549c30()
        
        if (rax_1 != 0)
            int64_t rcx_1 = sx.q(*(rax_1 + 0x38))
            int64_t* rax_2 = arg_8
            
            if (rcx_1.d s<= rax_2[7].d && *(rax_2[6] + (rcx_1 << 3)) == rax_1 + 0x30 && rax_2 != 0)
                uint64_t arg_10 = 0
                void* rax_3 = sub_142549c30()
                int64_t rax_4
                int64_t* rdx_2
                
                if (rax_3 != 0)
                    rdx_2 = arg_8
                    rax_4 = sx.q(*(rax_3 + 0x38))
                
                if (rax_3 == 0 || rax_4.d s> rdx_2[7].d
                        || *(rdx_2[6] + (rax_4 << 3)) != rax_3 + 0x30)
                    rdx_2 = nullptr
                
                *(arg1 + 0x230) = sub_140596910(arg1, rdx_2, arg_10, 0, 0, 0, 0)

int32_t zmm0 = (zx.o(0)).d

if (not(zmm0 f<= *(arg1 + 0x2f4)))
    *(arg1 + 0x2f4) = 0

if (not(zmm0 f<= *(arg1 + 0x2f8)))
    *(arg1 + 0x2f8) = 0

if (not(zmm0 f<= *(arg1 + 0x2fc)))
    *(arg1 + 0x2fc) = 0

if (not(zmm0 f<= *(arg1 + 0x300)))
    *(arg1 + 0x300) = 0

uint64_t result = zx.q(*(arg1 + 8) u>> 4)

if ((result.b & 1) == 0)
    result = zx.q(*(arg1 + 0x390))
    
    if (*(arg1 + 0x378) != result.d)
        result = sub_14244cd90(arg1)
    
    void* const rdi_1
    
    if (*(arg1 + 0x398) == 0)
        rdi_1 = nullptr
    else
        result = sub_142481000()
        
        if (result == 0)
            rdi_1 = nullptr
        else
            rdi_1 = *(arg1 + 0x398)
            int64_t rdx_3 = result + 0x30
            result = sx.q(*(result + 0x38))
            
            if (result.d s> *(rdi_1 + 0x38))
                rdi_1 = nullptr
            else
                uint64_t result_1 = result
                result = *(rdi_1 + 0x30)
                
                if (*(result + (result_1 << 3)) != rdx_3)
                    rdi_1 = nullptr
    
    void* const rdx_4
    
    if (*(arg1 + 0x380) == 0)
        rdx_4 = nullptr
    else
        result = sub_142481000()
        
        if (result == 0)
            rdx_4 = nullptr
        else
            rdx_4 = *(arg1 + 0x380)
            int64_t r8_4 = result + 0x30
            result = sx.q(*(result + 0x38))
            
            if (result.d s> *(rdx_4 + 0x38))
                rdx_4 = nullptr
            else
                uint64_t result_2 = result
                result = *(rdx_4 + 0x30)
                
                if (*(result + (result_2 << 3)) != r8_4)
                    rdx_4 = nullptr
    
    if (rdi_1 != rdx_4)
        sub_1424500c0(arg1)
        result = *(arg1 + 0x380)
        *(arg1 + 0x398) = result

return result
