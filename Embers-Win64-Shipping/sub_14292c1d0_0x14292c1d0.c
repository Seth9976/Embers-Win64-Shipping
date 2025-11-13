// 函数: sub_14292c1d0
// 地址: 0x14292c1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rax = sub_142898c70(arg3)
int32_t* result = sub_142898be0(0, rax)

if (result == 0)
    sub_1428a5670((result + 0x22).d, 0x9a, (result + 0x41).d, "crypto\x509v3\v3_alt.c", 0x121)
    sub_142898a10(nullptr)
    return 0

int32_t rdi = 0

if (rax s> 0)
    do
        void* rax_2 = sub_142898ea0(arg3, rdi)
        int32_t rax_3 = sub_1428ea5d0(*(rax_2 + 8), "email")
        char* rdx_2
        
        if (rax_3 == 0)
            rdx_2 = *(rax_2 + 0x10)
        
        int32_t r8_1
        
        if (rax_3 == 0 && rdx_2 != 0)
            for (int64_t i = 0; i != 5; )
                char rax_4 = rdx_2[i]
                i += 1
                
                if (rax_4 != *(i + 0x143537cb7))
                    goto label_14292c2c4
            
            r8_1 = 0
            goto label_14292c2fe
        
    label_14292c2c4:
        int32_t rax_5 = sub_1428ea5d0(*(rax_2 + 8), "email")
        char* rdx_3
        
        if (rax_5 == 0)
            rdx_3 = *(rax_2 + 0x10)
        
        if (rax_5 != 0 || rdx_3 == 0)
        label_14292c323:
            int32_t* rax_8 = sub_14292cfd0(arg1, arg2, rax_2)
            
            if (rax_8 == 0)
                sub_142898cb0(result, sub_1428e7b70)
                return nullptr
            
            sub_142898d50(result, rax_8)
        else
            int64_t i_1
            
            for (i_1 = 0; i_1 != 5; )
                char rcx_5 = rdx_3[i_1]
                i_1 += 1
                
                if (rcx_5 != *(i_1 + 0x143537cbf))
                    goto label_14292c323
            
            r8_1 = (i_1 - 4).d
        label_14292c2fe:
            
            if (sub_14292cbc0(arg2, result, r8_1) == 0)
                sub_142898cb0(result, sub_1428e7b70)
                return nullptr
        
        rdi += 1
    while (rdi s< rax)

return result
