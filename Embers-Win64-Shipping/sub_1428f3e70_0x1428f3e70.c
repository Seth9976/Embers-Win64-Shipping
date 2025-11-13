// 函数: sub_1428f3e70
// 地址: 0x1428f3e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
int32_t* rax_1 = sub_1428f35e0(arg2, sub_14060aa60(arg1))

if (rax_1 == 0)
    sub_1428a5670((rax_1 + 0xd).d, 0xae, 0xac, "crypto\asn1\asn_moid.c", 0x20)
    return 0

int32_t r14 = 0

if (sub_142898c70(rax_1) s> 0)
    int32_t rax_12
    
    do
        void* rax_4 = sub_142898ea0(rax_1, r14)
        char* rbp_1 = nullptr
        char* string = *(rax_4 + 0x10)
        char* r12_1 = *(rax_4 + 8)
        char* rax_5 = strrchr(string, 0x2c)
        char* string_1
        char* r8_1
        
        if (rax_5 != 0)
            string_1 = &rax_5[1]
            char rax_6 = rax_5[1]
            
            if (rax_6 == 0)
                goto label_1428f40a4
            
            if (sub_1428e4710(sx.d(rax_6), 8) != 0)
                int32_t i
                
                do
                    int32_t rcx_6 = sx.d(string_1[1])
                    string_1 = &string_1[1]
                    i = sub_1428e4710(rcx_6, 8)
                while (i != 0)
            
            if (sub_1428e4710(sx.d(*string), 8) != 0)
                int32_t i_1
                
                do
                    int32_t rcx_8 = sx.d(string[1])
                    string = &string[1]
                    i_1 = sub_1428e4710(rcx_8, 8)
                while (i_1 != 0)
            
            void* rbx_2 = rax_5 - 1
            
            if (sub_1428e4710(sx.d(rax_5[-1]), 8) != 0)
                int32_t i_2
                
                do
                    if (rbx_2 == string)
                        goto label_1428f40a4
                    
                    int32_t rcx_10 = sx.d(*(rbx_2 - 1))
                    rbx_2 -= 1
                    i_2 = sub_1428e4710(rcx_10, 8)
                while (i_2 != 0)
            
            void* rbx_4 = rbx_2 + 1 - string
            char* rax_10 = sub_1428a6730(rbx_4 + 1)
            rbp_1 = rax_10
            
            if (rax_10 == 0)
                sub_1428a5670(0xd, 0x7c, 0x41, "crypto\asn1\asn_moid.c", 0x57)
            label_1428f40a4:
                sub_1428a5670(0xd, 0xae, 0xab, "crypto\asn1\asn_moid.c", 0x26)
                return 0
            
            memcpy(rax_10, string, rbx_4.d)
            r8_1 = rbp_1
            *(rbx_4 + rbp_1) = 0
            goto label_1428f400d
        
        r8_1 = r12_1
        string_1 = string
    label_1428f400d:
        int32_t rax_11 = sub_1428a90c0(string_1, r12_1, r8_1)
        sub_1428a6780(rbp_1)
        
        if (rax_11 == 0)
            goto label_1428f40a4
        
        r14 += 1
        rax_12 = sub_142898c70(rax_1)
    while (r14 s< rax_12)

return 1
