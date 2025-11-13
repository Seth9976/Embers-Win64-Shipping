// 函数: sub_1429368e0
// 地址: 0x1429368e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void* rsi = nullptr
int32_t* r13 = nullptr
int32_t* r15 = nullptr
int32_t rbp = 0
int64_t r14
r14.b = 0
int64_t rdi
rdi.b = 0

if (sub_142898c70(arg3) s> 0)
    int32_t rax_5
    
    do
        void* rax_1 = sub_142898ea0(arg3, rbp)
        int64_t rdx_1 = 0
        char* r8 = *(rax_1 + 8)
        
        while (true)
            char rcx_2 = r8[rdx_1]
            rdx_1 += 1
            
            if (rcx_2 != *(rdx_1 + 0x143516ff7))
                int64_t rax_3 = 0
                
                while (true)
                    char rcx_4 = r8[rax_3]
                    rax_3 += 1
                    
                    if (rcx_4 != *(rax_3 + 0x1434ead5b))
                        sub_1428a5670(0x22, 0x77, 0x78, "crypto\x509v3\v3_akey.c", 0x5e)
                        *(rax_1 + 8)
                        sub_1428a4880(2)
                        goto label_142936bee
                    
                    if (rax_3 == 7)
                        void* r8_1 = *(rax_1 + 0x10)
                        rdi.b = 1
                        
                        if (r8_1 != 0)
                            uint32_t rax_4
                            uint32_t rdx_3
                            
                            for (int64_t i = 0; i != 7; )
                                rdx_3 = zx.d(*(r8_1 + i))
                                i += 1
                                rax_4 = zx.d(data_143539ba8[0x17][i])
                                
                                if (rdx_3 != rax_4)
                                    break
                            
                            rdi = 1
                            r13 = nullptr
                            
                            if (rdx_3 - rax_4 == 0)
                                rdi = 2
                        
                        break
                
                break
            
            if (rdx_1 == 6)
                char* rdx_2 = *(rax_1 + 0x10)
                r14.b = 1
                
                if (rdx_2 != 0)
                    int64_t rcx_3 = 0
                    
                    while (true)
                        char rax_2 = rdx_2[rcx_3]
                        rcx_3 += 1
                        
                        if (rax_2 != data_143539ba8[0x17][rcx_3])
                            break
                        
                        if (rcx_3 == 7)
                            r14.b = 2
                            break
                
                break
        
        rbp += 1
        rax_5 = sub_142898c70(arg3)
    while (rbp s< rax_5)

if (arg2 == 0)
label_142936bcc:
    sub_1428a5670(0x22, 0x77, 0x79, "crypto\x509v3\v3_akey.c", 0x68)
else
    void* rbx_2 = *(arg2 + 8)
    
    if (rbx_2 == 0)
        if (*arg2 == 1)
            return sub_1428f15e0()
        
        goto label_142936bcc
    
    if (r14.b != 0)
        int32_t rax_7 = sub_1428ac790(rbx_2, 0x52, 0xffffffff)
        
        if (rax_7 s>= 0)
            int64_t* rax_8 = sub_1428ac770(rbx_2, rax_7)
            
            if (rax_8 != 0)
                rsi = sub_1428f78c0(rax_8)
    
    if (r14.b == 0 || r14.b != 2 || rsi != 0)
        if (rdi.b == 0)
            if (rdi.b != 2)
                goto label_142936b44
            
            goto label_142936ada
        
        void* const rbp_1
        int64_t rdi_1
        
        if (rsi == 0 || rdi.b == 2)
        label_142936ada:
            rdi_1 = sub_1428abf10(sub_1428a38f0(rbx_2))
            void* rax_13 = sub_1428e4840(sub_14060ee10(rbx_2))
            rbp_1 = rax_13
            
            if (rdi_1 != 0 && rax_13 != 0)
                goto label_142936b4a
            
            sub_1428a5670(0x22, 0x77, 0x7a, "crypto\x509v3\v3_akey.c", 0x7e)
        else
        label_142936b44:
            rdi_1 = 0
            rbp_1 = nullptr
        label_142936b4a:
            void** result = sub_1428f15e0()
            
            if (result != 0)
                if (rdi_1 == 0)
                    goto label_142936b90
                
                int32_t* rax_14 = sub_142898ba0()
                r13 = rax_14
                int32_t var_58_2
                int32_t r8_4
                
                if (rax_14 == 0)
                    var_58_2 = 0x8a
                    r8_4 = 0x41
                else
                    int32_t* rax_15 = sub_1428e7b90()
                    r15 = rax_15
                    
                    if (rax_15 == 0)
                        var_58_2 = 0x8a
                        r8_4 = 0x41
                    else
                        if (sub_142898d50(r13, rax_15) != 0)
                            *r15 = 4
                            *(r15 + 8) = rdi_1
                        label_142936b90:
                            result[1] = r13
                            result[2] = rbp_1
                            *result = rsi
                            return result
                        
                        var_58_2 = 0x8a
                        r8_4 = 0x41
                
                sub_1428a5670(0x22, 0x77, r8_4, "crypto\x509v3\v3_akey.c", var_58_2)
        
        sub_142898a10(r13)
        sub_1428e7b70(r15)
        sub_1428abf30(rdi_1)
        sub_1428c3460(rbp_1)
        sub_1428c3460(rsi)
    else
        sub_1428a5670(0x22, 0x77, (rsi + 0x7b).d, "crypto\x509v3\v3_akey.c", 0x74)

label_142936bee:
return nullptr
