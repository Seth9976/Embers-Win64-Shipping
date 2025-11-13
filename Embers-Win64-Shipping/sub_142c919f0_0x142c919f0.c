// 函数: sub_142c919f0
// 地址: 0x142c919f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t r14 = *(arg2 + 0x30)
int32_t rbx = -1

for (int32_t i = *arg2 - 1; i u<= 5; i = *arg2 - 1)
    switch (jump_table_142c91e10[sx.q(i)])
        case 0x2c91a4f
            if (*(arg2 + 8) == 0 && *(arg2 + 0x10) == 0)
                int32_t var_28_1 = 0x57
                sub_1428a5670(0x20, 0x73, 0x90, "crypto\bio\bss_conn.c", 0x57)
                *(arg2 + 8)
                var_28_1.q = *(arg2 + 0x10)
                sub_1428a4880(4)
                break
            
            *arg2 = 2
        case 0x2c91a6c
            int32_t rax_2 = arg2[1]
            int32_t r9_1
            
            if (rax_2 == 4)
                r9_1 = 2
            else if (rax_2 == 6)
                r9_1 = 0x17
            else
                if (rax_2 != 0x100)
                    sub_1428a5670(0x20, 0x73, 0x92, "crypto\bio\bss_conn.c", 0x78)
                    break
                
                r9_1 = 0
            
            if (sub_1428c2340(*(arg2 + 8), *(arg2 + 0x10), 0, r9_1, 1, &arg2[8]) == 0)
                break
            
            int64_t rax_4 = *(arg2 + 0x20)
            
            if (rax_4 == 0)
                sub_1428a5670(0x20, 0x73, 0x8e, "crypto\bio\bss_conn.c", 0x81)
                break
            
            *(arg2 + 0x28) = rax_4
            *arg2 = 3
        case 0x2c91adb
            int32_t rax_5 = sub_1428c2260(*(arg2 + 0x28))
            enum WINSOCK_SOCKET_TYPE rax_6 = sub_1428c2290(*(arg2 + 0x28))
            int32_t rax_8 = sub_1428f4e40(sub_1428c2220(*(arg2 + 0x28)), rax_6, rax_5)
            rbx = rax_8
            
            if (rax_8 == 0xffffffff)
                int32_t var_28_2 = 0x8d
                sub_1428a5670(2, 4, WSAGetLastError(), "crypto\bio\bss_conn.c", 0x8d)
                *(arg2 + 8)
                var_28_2.q = *(arg2 + 0x10)
                sub_1428a4880(4)
                sub_1428a5670(0x20, 0x73, 0x76, "crypto\bio\bss_conn.c", 0x91)
                break
            
            *(arg1 + 0x30) = rax_8
            *arg2 = 4
        case 0x2c91b22
            sub_142899cc0(arg1, 0xf)
            int32_t rbx_3 = arg2[6] | 4
            int64_t rax_9 = sub_1428c2210(*(arg2 + 0x28))
            int32_t rax_10 = sub_1428f4c40(*(arg1 + 0x30), rax_9, rbx_3)
            *(arg1 + 0x2c) = 0
            rbx = rax_10
            
            if (rax_10 != 0)
                *arg2 = 5
            else
                if (sub_1428a7be0(0) != 0)
                    sub_14289a9a0(arg1, 0xc)
                    *arg2 = 6
                    *(arg1 + 0x2c) = 2
                    sub_1428a49e0()
                    break
                
                int64_t rax_12 = sub_1428c2250(*(arg2 + 0x28))
                *(arg2 + 0x28) = rax_12
                
                if (rax_12 == 0)
                    int32_t var_28_3 = 0xad
                    sub_1428a5670(2, 2, WSAGetLastError(), "crypto\bio\bss_conn.c", 0xad)
                    *(arg2 + 8)
                    var_28_3.q = *(arg2 + 0x10)
                    sub_1428a4880(4)
                    sub_1428a5670(0x20, 0x73, 0x67, "crypto\bio\bss_conn.c", 0xb1)
                    break
                
                sub_1428f4c10(*(arg1 + 0x30))
                *arg2 = 3
                sub_1428a49e0()
        case 0x2c91b93
            int32_t rax_13 = sub_1428e36a0(*(arg1 + 0x30))
            
            if (rax_13 != 0)
                sub_142899cc0(arg1, 0xf)
                int32_t var_28_4 = 0xbd
                sub_1428a5670(2, 2, rax_13, "crypto\bio\bss_conn.c", 0xbd)
                *(arg2 + 8)
                var_28_4.q = *(arg2 + 0x10)
                sub_1428a4880(4)
                sub_1428a5670(0x20, 0x73, 0x6e, "crypto\bio\bss_conn.c", 0xc1)
                rbx = 0
                break
            
            *arg2 = 5
        case 0x2c91ddd
            rbx = 1
            break
            break
    
    if (r14 != 0)
        int32_t rax_14 = r14(arg1, zx.q(*arg2), zx.q(rbx))
        rbx = rax_14
        
        if (rax_14 == 0)
            return rax_14

if (r14 == 0)
    return rbx

return r14(arg1, zx.q(*arg2), zx.q(rbx))
