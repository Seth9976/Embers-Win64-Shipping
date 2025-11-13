// 函数: sub_1428cd950
// 地址: 0x1428cd950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
int64_t rdi = sx.q(arg3)

if (arg3 s> 0 && arg2 != 0)
    char* rbx_1 = *arg2
    
    if (rbx_1 != 0 && rbx_1[rdi - 1] s>= 0)
        char* var_40 = rbx_1
        int32_t var_48 = 0
        int32_t var_38 = 0
        int32_t var_44 = rdi.d
        void var_58
        int32_t rax = sub_1428a96d0(&var_58)
        
        if (rax != 0)
            void* rax_1 = sub_1428a9570(rax)
            
            if (arg1 != 0)
                sub_1428cd400(*arg1)
                *arg1 = rax_1
            
            *arg2 += rdi
            return rax_1
        
        int32_t i = 0
        
        if (rdi.d s> 0)
            do
                if (*rbx_1 == 0x80 && (i == 0 || rbx_1[-1] s>= 0))
                    sub_1428a5670(0xd, 0xc4, 0xd8, "crypto\asn1\a_object.c", 0x11c)
                    return nullptr
                
                i += 1
                rbx_1 = &rbx_1[1]
            while (i s< rdi.d)
        
        void* rbx_3
        
        if (arg1 != 0)
            rbx_3 = *arg1
        
        if (arg1 == 0 || rbx_3 == 0 || (*(rbx_3 + 0x20) & 1) == 0)
            void* rax_3 = sub_1428a6a70(0x28)
            rbx_3 = rax_3
            
            if (rax_3 == 0)
                sub_1428a5670((rax_3 + 0xd).d, (rax_3 + 0x7b).d, (rax_3 + 0x41).d, 
                    "crypto\asn1\a_object.c", 0x155)
                return nullptr
            
            *(rax_3 + 0x20) = 1
        
        int64_t rbp_1 = *arg2
        int64_t r12_1 = *(rbx_3 + 0x18)
        *(rbx_3 + 0x18) = 0
        
        if (r12_1 == 0 || *(rbx_3 + 0x14) s< rdi.d)
            *(rbx_3 + 0x14) = 0
            sub_1428a6780(r12_1)
            int64_t rax_4 = sub_1428a6730(rdi)
            r12_1 = rax_4
            
            if (rax_4 == 0)
                sub_1428a5670((rax_4 + 0xd).d, 0xc4, (rax_4 + 0x41).d, "crypto\asn1\a_object.c", 
                    0x149)
                
                if (arg1 == 0 || *arg1 != rbx_3)
                    sub_1428cd400(rbx_3)
                
                return nullptr
            
            *(rbx_3 + 0x20) |= 8
        
        memcpy(r12_1, rbp_1, rdi.d)
        *(rbx_3 + 0x18) = r12_1
        *(rbx_3 + 0x14) = rdi.d
        *rbx_3 = 0
        *(rbx_3 + 8) = 0
        
        if (arg1 != 0)
            *arg1 = rbx_3
        
        *arg2 = rbp_1 + rdi
        return rbx_3

sub_1428a5670(0xd, 0xc4, 0xd8, "crypto\asn1\a_object.c", 0xfe)
return 0
