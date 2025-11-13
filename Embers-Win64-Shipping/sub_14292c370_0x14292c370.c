// 函数: sub_14292c370
// 地址: 0x14292c370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rdi = arg1
int32_t rax = sub_142898c70(arg3)
int32_t* result = sub_142898be0(0, rax)

if (result == 0)
    sub_1428a5670((result + 0x22).d, 0x99, (result + 0x41).d, "crypto\x509v3\v3_alt.c", 0xd2)
    sub_142898a10(nullptr)
    return 0

int32_t r15 = 0

if (rax s> 0)
    do
        void* rax_2 = sub_142898ea0(arg3, r15)
        int32_t rax_3 = sub_1428ea5d0(*(rax_2 + 8), "issuer")
        char* rdx_2
        
        if (rax_3 == 0)
            rdx_2 = *(rax_2 + 0x10)
        
        if (rax_3 != 0 || rdx_2 == 0)
        label_14292c51a:
            int32_t* rax_11 = sub_14292cfd0(rdi, arg2, rax_2)
            
            if (rax_11 == 0)
                sub_142898cb0(result, sub_1428e7b70)
                return nullptr
            
            sub_142898d50(result, rax_11)
        else
            for (int64_t i = 0; i != 5; )
                char rax_4 = rdx_2[i]
                i += 1
                
                if (rax_4 != *(i + 0x143537cb7))
                    goto label_14292c51a
            
            int32_t rax_13
            int32_t r8_2
            
            if (arg2 == 0)
            label_14292c574:
                rax_13 = 0xf7
                r8_2 = 0x7f
            label_14292c590:
                sub_1428a5670(0x22, 0x7b, r8_2, "crypto\x509v3\v3_alt.c", rax_13)
                sub_142898cb0(result, sub_1428e7b70)
                return nullptr
            
            if (*arg2 != 1)
                void* rcx_4 = *(arg2 + 8)
                
                if (rcx_4 == 0)
                    goto label_14292c574
                
                int32_t rax_5 = sub_1428ac790(rcx_4, 0x55, 0xffffffff)
                
                if (rax_5 s>= 0)
                    int64_t* rax_6 = sub_1428ac770(*(arg2 + 8), rax_5)
                    int32_t* rax_7
                    
                    if (rax_6 != 0)
                        rax_7 = sub_1428f78c0(rax_6)
                    
                    if (rax_6 == 0 || rax_7 == 0)
                        rax_13 = 0xff
                        r8_2 = 0x7e
                        goto label_14292c590
                    
                    int32_t rax_8 = sub_142898c70(rax_7)
                    
                    if (sub_142898d80(result, rax_8) == 0)
                        rax_13 = 0x105
                        r8_2 = 0x41
                        goto label_14292c590
                    
                    int32_t rbx_2 = 0
                    
                    if (rax_8 s> 0)
                        do
                            sub_142898d50(result, sub_142898ea0(rax_7, rbx_2))
                            rbx_2 += 1
                        while (rbx_2 s< rax_8)
                    
                    sub_142898a10(rax_7)
                    rdi = arg1
        
        r15 += 1
    while (r15 s< rax)

return result
