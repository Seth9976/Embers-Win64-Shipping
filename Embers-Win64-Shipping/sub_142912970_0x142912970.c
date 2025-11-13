// 函数: sub_142912970
// 地址: 0x142912970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rbx = *(arg1 + 0x28)
char* rsi = arg4
int64_t rdi = sx.q(arg3)

if (arg2 s> 0x1001)
    if (arg2 - 0x1002 u> 8)
        return 0xfffffffe
    
    switch (arg2)
        case 0x1002
            void* rcx_9 = *rbx
            
            if (rcx_9 != 0)
                sub_14289a9e0(rcx_9, rdi.d)
                return 1
            
            sub_1428a5670(0x10, 0xc5, 0x8b, "crypto\ec\ec_pmeth.c", 0xf0)
            return 0
        case 0x1003
            if (rdi.d == 0xfffffffe)
                char rax_22 = rbx[3].b
                
                if (rax_22 == 0xff)
                    return zx.q(sub_1406bc600(*(*(arg1 + 0x10) + 0x28)) u>> 0xc) & 1
                
                return zx.q(sx.d(rax_22))
            
            if ((rdi + 1).d u> 2)
                return 0xfffffffe
            
            rbx[3].b = rdi.b
            
            if (rdi.d == 0xffffffff)
                sub_1428c0b90(rbx[2])
                rbx[2] = 0
                return 1
            
            int64_t* rsi_1 = *(*(arg1 + 0x10) + 0x28)
            void* rcx_11 = rsi_1[3]
            
            if (rcx_11 == 0)
                return 0xfffffffe
            
            if (sub_1428902b0(*(rcx_11 + 0x18)) != 0)
                return 1
            
            int64_t* rax_31 = rbx[2]
            
            if (rax_31 == 0)
                rax_31 = sub_1428c0b30(rsi_1)
                rbx[2] = rax_31
                
                if (rax_31 != 0)
                    goto label_142912c0b
                
                return 0
            
        label_142912c0b:
            
            if (rdi.d == 0)
                sub_1428c0910(rax_31, 0x1000)
                return 1
            
            sub_1428c1030(rax_31, 0x1000)
            return 1
        case 0x1004
            if (rdi.d == 0xfffffffe)
                return zx.q(sx.d(*(rbx + 0x19)))
            
            if ((rdi - 1).d u> 1)
                return 0xfffffffe
            
            *(rbx + 0x19) = rdi.b
            return 1
        case 0x1005
            rbx[4] = rsi
            return 1
        case 0x1006
            *arg4 = rbx[4]
            return 1
        case 0x1007
            if (rdi.d s<= 0)
                return 0xfffffffe
            
            rbx[7] = rdi
            return 1
        case 0x1008
            *arg4 = rbx[7].d
            return 1
        case 0x1009
            sub_1428a6780(rbx[5])
            rbx[5] = rsi
            int64_t rax_44 = rdi
            
            if (rsi == 0)
                rax_44 = 0
            
            rbx[6] = rax_44
            return 1
        case 0x100a
            *arg4 = rbx[5]
            return zx.q(rbx[6].d)
else
    if (arg2 == 0x1001)
        char* rax_14 = sub_1428c0250(rdi.d)
        
        if (rax_14 == 0)
            sub_1428a5670((&rax_14[0x10]).d, 0xc5, 0x8d, "crypto\ec\ec_pmeth.c", 0xe7)
            return 0
        
        sub_1428bee10(*rbx)
        *rbx = rax_14
        return 1
    
    if (arg2 - 1 u> 0xc)
        return 0xfffffffe
    
    switch (arg2)
        case 1
            if (sub_1406938b0(rsi) != 0x40 && sub_1406938b0(rsi) != 0x1a0
                    && sub_1406938b0(rsi) != 0x2a3 && sub_1406938b0(rsi) != 0x2a0
                    && sub_1406938b0(rsi) != 0x2a1 && sub_1406938b0(rsi) != 0x2a2)
                sub_1428a5670(0x10, 0xc5, 0x8a, "crypto\ec\ec_pmeth.c", 0x147)
                return 0
            
            rbx[1] = rsi
            return 1
        case 2, 5, 7, 0xb
            return 1
        case 3, 4, 6, 8, 9, 0xa, 0xc
            return 0xfffffffe
        case 0xd
            *arg4 = rbx[1]
            return 1
