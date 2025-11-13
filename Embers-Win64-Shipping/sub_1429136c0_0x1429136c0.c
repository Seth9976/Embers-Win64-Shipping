// 函数: sub_1429136c0
// 地址: 0x1429136c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
char** rbx = *(arg1 + 0x28)

switch (arg2)
    case 1
        rbx[1] = arg4
        return 1
    case 0xd
        *arg4 = rbx[1]
        return 1
    case 0x1001
        char* rax_1 = sub_1428c0250(arg3)
        
        if (rax_1 == 0)
            sub_1428a5670((&rax_1[0x35]).d, (&rax_1[0x6d]).d, (&rax_1[0x6c]).d, 
                "crypto\sm2\sm2_pmeth.c", 0xad)
            return 0
        
        sub_1428bee10(*rbx)
        *rbx = rax_1
        return 1
    case 0x1002
        char* rcx_3 = *rbx
        
        if (rcx_3 != 0)
            sub_14289a9e0(rcx_3, arg3)
            return 1
        
        sub_1428a5670(0x35, 0x6d, 0x6d, "crypto\sm2\sm2_pmeth.c", 0xb6)
        return 0
    case 0x100b
        int64_t rbp = sx.q(arg3)
        int64_t rsi
        
        if (arg3 s<= 0)
            rsi = 0
        else
            int64_t rax_13 = sub_1428a6730(rbp)
            rsi = rax_13
            
            if (rax_13 == 0)
                sub_1428a5670((rax_13 + 0x35).d, (rax_13 + 0x6d).d, (rax_13 + 0x41).d, 
                    "crypto\sm2\sm2_pmeth.c", 0xc8)
                return 0
            
            memcpy(rax_13, arg4, rbp.d)
        
        sub_1428a6780(rbx[2])
        rbx[2] = rsi
        rbx[3] = rbp
        rbx[4].d = 1
        return 1
    case 0x100c
        memcpy(arg4, rbx[2], (rbx[3]).d)
        return 1
    case 0x100d
        *arg4 = rbx[3]
        return 1

return 0xfffffffe
