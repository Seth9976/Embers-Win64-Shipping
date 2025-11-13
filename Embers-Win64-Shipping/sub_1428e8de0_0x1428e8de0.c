// 函数: sub_1428e8de0
// 地址: 0x1428e8de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
char* r8 = arg1[2]

if (r8 != 0)
    int64_t r9_1 = 0
    
    while (true)
        char rax_1 = r8[r9_1]
        r9_1 += 1
        
        if (rax_1 != *(r9_1 + 0x142e7b56b))
            break
        
        if (r9_1 == 5)
            *arg2 = 0xff
            return zx.q((r9_1 - 4).d)
    
    int64_t rcx = 0
    
    while (true)
        char rax_3 = r8[rcx]
        rcx += 1
        
        if (rax_3 != *(rcx + 0x143449e2f))
            break
        
        if (rcx == 5)
            *arg2 = 0xff
            return zx.q((rcx - 4).d)
    
    if (*r8 == 0x59 && r8[1] == 0)
    label_1428e8ee5:
        *arg2 = 0xff
        return 1
    
    if (*r8 == 0x79 && r8[1] == 0)
        goto label_1428e8ee5
    
    int64_t rcx_1 = 0
    
    while (true)
        char rax_9 = r8[rcx_1]
        rcx_1 += 1
        
        if (rax_9 != *(rcx_1 + 0x1434d31d3))
            break
        
        if (rcx_1 == 4)
            *arg2 = 0xff
            return zx.q((rcx_1 - 3).d)
    
    int64_t rcx_2 = 0
    
    while (true)
        char rax_11 = r8[rcx_2]
        rcx_2 += 1
        
        if (rax_11 != *(rcx_2 + 0x1434d31db))
            int64_t rcx_3 = 0
            
            while (true)
                char rax_13 = r8[rcx_3]
                rcx_3 += 1
                
                if (rax_13 != *(rcx_3 + 0x142e7b573))
                    break
                
                if (rcx_3 == 6)
                    *arg2 = 0
                    return zx.q((rcx_3 - 5).d)
            
            int64_t rcx_4 = 0
            
            while (true)
                char rax_15 = r8[rcx_4]
                rcx_4 += 1
                
                if (rax_15 != *(rcx_4 + 0x143449e27))
                    break
                
                if (rcx_4 == 6)
                    *arg2 = 0
                    return zx.q((rcx_4 - 5).d)
            
            if ((*r8 == 0x4e && r8[1] == 0) || (*r8 == 0x6e && r8[1] == 0)
                    || (*r8 == 0x4e && r8[1] == 0x4f && r8[2] == 0))
                *arg2 = 0
                return 1
            
            if (*r8 != 0x6e || r8[1] != 0x6f || r8[2] != 0)
                break
            
            *arg2 = 0
            return 1
        
        if (rcx_2 == 4)
            goto label_1428e8ee5

int32_t var_28 = 0x107
sub_1428a5670(0x22, 0x6e, 0x68, "crypto\x509v3\v3_utl.c", 0x107)
*arg1
int64_t var_18 = arg1[2]
char const* const var_20 = ",value:"
var_28.q = arg1[1]
sub_1428a4880(6)
return 0
