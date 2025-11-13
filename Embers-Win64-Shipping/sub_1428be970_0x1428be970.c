// 函数: sub_1428be970
// 地址: 0x1428be970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rax = *arg1

if (*(rax + 0x20) == 0)
    sub_1428a5670(0x10, 0x6a, 0x42, "crypto\ec\ec_lib.c", 0x85)
    return 0

if (rax != *arg2)
    sub_1428a5670(0x10, 0x6a, 0x65, "crypto\ec\ec_lib.c", 0x89)
    return 0

if (arg1 == arg2)
    return 1

arg1[4].d = arg2[4].d
arg1[0x13].d = arg2[0x13].d
int32_t rax_6 = arg2[0x13].d

if (rax_6 == 0)
    arg1[0x14] = 0
else if (rax_6 == 5)
    arg1[0x14] = sub_142918130(arg2[0x14])

int32_t* rdx = arg2[0x12]

if (rdx == 0)
    sub_1428cc600(arg1[0x12])
    arg1[0x12] = 0
label_1428beaaf:
    int64_t* rdx_1 = arg2[1]
    
    if (rdx_1 == 0)
        sub_1428bf490(arg1[1])
        arg1[1] = 0
    label_1428beb06:
        
        if ((**arg2 & 2) != 0)
        label_1428beb39:
            int64_t rcx_8 = arg1[6]
            *(arg1 + 0x24) = *(arg2 + 0x24)
            arg1[5].d = arg2[5].d
            
            if (arg2[6] == 0)
                sub_1428a6780(rcx_8)
                arg1[6] = 0
                arg1[7] = 0
                jump(*(*arg1 + 0x20))
            
            sub_1428a6780(rcx_8)
            int64_t rax_17 = sub_1428a6730(arg2[7])
            arg1[6] = rax_17
            
            if (rax_17 != 0)
                memcpy(rax_17, arg2[6], (arg2[7]).d)
                
                if (rax_17 != 0)
                    arg1[7] = arg2[7]
                    jump(*(*arg1 + 0x20))
            else
                sub_1428a5670((rax_17 + 0x10).d, (rax_17 + 0x6a).d, (rax_17 + 0x41).d, 
                    "crypto\ec\ec_lib.c", 0xda)
        else if (sub_142890040(arg1[2], arg2[2]) != 0 && sub_142890040(arg1[3], arg2[3]) != 0)
            goto label_1428beb39
    else
        int64_t* rax_10 = arg1[1]
        
        if (rax_10 != 0)
            goto label_1428beadd
        
        rax_10 = sub_1428bfa80(arg1)
        arg1[1] = rax_10
        
        if (rax_10 != 0)
            rdx_1 = arg2[1]
        label_1428beadd:
            int32_t rax_11 = sub_1428bf580(rax_10, rdx_1)
            
            if (rax_11 == 0)
                return rax_11
            
            goto label_1428beb06
else
    int32_t* rax_8 = arg1[0x12]
    
    if (rax_8 != 0)
        goto label_1428bea82
    
    rax_8 = sub_1428cc660()
    arg1[0x12] = rax_8
    
    if (rax_8 != 0)
        rdx = arg2[0x12]
    label_1428bea82:
        int32_t* rax_9 = sub_1428cc570(rax_8, rdx)
        
        if (rax_9 == 0)
            return rax_9
        
        goto label_1428beaaf

return 0
