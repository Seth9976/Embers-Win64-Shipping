// 函数: sub_1428b9f10
// 地址: 0x1428b9f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbp = 0
__builtin_memset(arg2, 0, 0x18)

if (arg1 != 0)
    char rax_1 = *arg1
    
    if (rax_1 != 0 && rax_1 != 0xa)
        if (strncmp(arg1, "Proc-Type:", 0xa) != 0)
            sub_1428a5670(9, 0x6b, 0x6b, "crypto\pem\pem_lib.c", 0x1f0)
            return 0
        
        void* rsi_2 = &arg1[0xa + strspn(&arg1[0xa], " \t")]
        
        if (*rsi_2 != 0x34 || *(rsi_2 + 1) != 0x2c)
            return 0
        
        void* _Str1 = rsi_2 + 2 + strspn(rsi_2 + 2, " \t")
        int32_t rax_6 = strncmp(_Str1, "ENCRYPTED", 9)
        uint64_t rax_7
        
        if (rax_6 == 0)
            rax_7 = strspn(_Str1 + 9, " \t\r\n")
        
        if (rax_6 != 0 || rax_7 == 0)
            sub_1428a5670(9, 0x6b, 0x6a, "crypto\pem\pem_lib.c", 0x1fd)
            return 0
        
        void* rsi_5 = _Str1 + 9 + strspn(_Str1 + 9, " \t\r")
        
        if (*rsi_5 != 0xa)
            sub_1428a5670(9, 0x6b, 0x70, "crypto\pem\pem_lib.c", 0x203)
            return 0
        
        if (strncmp(rsi_5 + 1, "DEK-Info:", 9) != 0)
            sub_1428a5670(9, 0x6b, 0x69, "crypto\pem\pem_lib.c", 0x20c)
            return 0
        
        void* _Str = rsi_5 + 0xa + strspn(rsi_5 + 0xa, " \t")
        void* _Str_1 = _Str + strcspn(_Str, " \t,")
        char rdi_1 = *_Str_1
        *_Str_1 = 0
        void* rax_13 = sub_14289b930(_Str)
        *arg2 = rax_13
        *_Str_1 = rdi_1
        void* rsi_7 = _Str_1 + strspn(_Str_1, " \t")
        
        if (rax_13 == 0)
            sub_1428a5670((rax_13 + 9).d, (rax_13 + 0x6b).d, (rax_13 + 0x72).d, 
                "crypto\pem\pem_lib.c", 0x21f)
            return 0
        
        int32_t rax_15 = sub_140611e40(rax_13)
        bool cond:0_1 = rax_15 != 0
        
        if (rax_15 s> 0)
            char rcx_12 = *rsi_7
            rsi_7 += 1
            
            if (rcx_12 != 0x2c)
                sub_1428a5670(9, 0x6b, 0x81, "crypto\pem\pem_lib.c", 0x224)
                return 0
            
            cond:0_1 = rax_15 != 0
        
        if (not(cond:0_1) && *rsi_7 == 0x2c)
            sub_1428a5670(9, 0x6b, 0x82, "crypto\pem\pem_lib.c", 0x227)
            return 0
        
        int32_t count_1 = sub_140611e40(rax_13)
        int64_t count = sx.q(count_1)
        
        if (count_1 s> 0)
            __builtin_memset(&arg2[1], 0, count)
        
        int32_t rbx_3 = count.d * 2
        
        if (rbx_3 s> 0)
            while (true)
                int32_t rax_16 = sub_1428a6d80(*rsi_7)
                
                if (rax_16 s< 0)
                    break
                
                rsi_7 += 1
                int32_t rcx_16 = rbp
                
                if (rbp s< 0)
                    rcx_16 = rbp + 1
                
                int64_t rdx_2 = sx.q(rcx_16 s>> 1)
                int32_t rcx_19 = not.d(rbp)
                rbp += 1
                *(rdx_2 + arg2 + 8) |= rax_16.b << ((rcx_19 & 1) << 2).b
                
                if (rbp s>= rbx_3)
                    return 1
            
            sub_1428a5670(9, 0x65, 0x67, "crypto\pem\pem_lib.c", 0x23d)
            return 0

return 1
