// 函数: sub_142935b60
// 地址: 0x142935b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t* result = sub_1428c3490()

if (result == 0)
    sub_1428a5670((result + 0x22).d, (result + 0x65).d, (result + 0x41).d, 
        "crypto\x509v3\v3_bitst.c", 0x43)
    return 0

int32_t rdi = 0

if (sub_142898c70(arg3) s> 0)
    while (true)
        int64_t* rax_2 = sub_142898ea0(arg3, rdi)
        void* rbx_1 = *(arg1 + 0x60)
        char* rcx_3 = *(rbx_1 + 8)
        
        if (rcx_3 != 0)
            int64_t r10_1 = rax_2[1]
            
            while (true)
                char* rdx_2 = *(rbx_1 + 0x10)
                void* r9_2 = r10_1 - rdx_2
                uint32_t i
                uint32_t r8_1
                
                do
                    r8_1 = zx.d(*rdx_2)
                    i = zx.d(*(rdx_2 + r9_2))
                    
                    if (r8_1 != i)
                        break
                    
                    rdx_2 = &rdx_2[1]
                while (i != 0)
                
                if (r8_1 - i != 0)
                    void* r8_4 = r10_1 - rcx_3
                    uint32_t i_1
                    uint32_t rdx_3
                    
                    do
                        rdx_3 = zx.d(*rcx_3)
                        i_1 = zx.d(*(rcx_3 + r8_4))
                        
                        if (rdx_3 != i_1)
                            break
                        
                        rcx_3 = &rcx_3[1]
                    while (i_1 != 0)
                    
                    if (rdx_3 - i_1 != 0)
                        rcx_3 = *(rbx_1 + 0x20)
                        rbx_1 += 0x18
                        
                        if (rcx_3 == 0)
                            break
                        
                        continue
                
                if (sub_14291c060(result, *rbx_1, 1) != 0)
                    break
                
                sub_1428a5670(0x22, 0x65, 0x41, "crypto\x509v3\v3_bitst.c", 0x4d)
                sub_1428c3460(result)
                return nullptr
        
        if (*(rbx_1 + 8) == 0)
            int32_t var_38_1 = 0x56
            sub_1428a5670(0x22, 0x65, 0x6f, "crypto\x509v3\v3_bitst.c", 0x56)
            *rax_2
            int64_t var_28_1 = rax_2[2]
            char const* const var_30_1 = ",value:"
            var_38_1.q = rax_2[1]
            sub_1428a4880(6)
            sub_1428c3460(result)
            return nullptr
        
        rdi += 1
        
        if (rdi s>= sub_142898c70(arg3))
            break

return result
