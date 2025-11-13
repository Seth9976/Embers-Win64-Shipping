// 函数: sub_142853b10
// 地址: 0x142853b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
int64_t* result = sub_1428a6a70(0x228)

if (result == 0)
    sub_1428a5670((result + 0x14).d, 0xdd, (result + 0x41).d, "ssl\ssl_cert.c", 0x50)
    return 0

result[0x43].d = 1
int64_t rax_1
int64_t rdx_1
rdx_1:rax_1 = muls.dp.q(0x6666666666666667, *arg1 - arg1 - 0x20)
int64_t rdx_2 = rdx_1 s>> 4
int64_t rdx_3 = rdx_2 + (rdx_2 u>> 0x3f)
*result = &result[rdx_3 + ((rdx_3 + 1) << 2)]
CRITICAL_SECTION* rax_6 = sub_1428a5be0()
result[0x44] = rax_6

if (rax_6 == 0)
    sub_1428a5670((&rax_6->OwningThread + 4).d, 0xdd, (rax_6 + 0x41).d, "ssl\ssl_cert.c", 0x58)
    sub_1428a6780(result)
    return 0

void* rcx_7 = arg1[1]

if (rcx_7 != 0)
    result[1] = rcx_7
    sub_142896e70(rcx_7)

void* rbx = &arg1[5]
result[2] = arg1[2]
result[3].d = arg1[3].d
int64_t rbp = 0
int64_t* r14_1 = result - arg1

while (true)
    void* rcx_8 = *(rbx - 8)
    
    if (rcx_8 != 0)
        *(r14_1 + rbx - 8) = rcx_8
        sub_1428a3ba0(rcx_8)
    
    int64_t rax_10 = *rbx
    
    if (rax_10 != 0)
        *(r14_1 + rbx) = rax_10
        sub_142896e70(*rbx)
    
    int128_t* rcx_10 = *(rbx + 8)
    int128_t* rax_11
    
    if (rcx_10 != 0)
        rax_11 = sub_1428a3640(rcx_10)
        *(r14_1 + rbx + 8) = rax_11
    
    int32_t var_28_1
    
    if (rcx_10 != 0 && rax_11 == 0)
        var_28_1 = 0x75
    else
        if (*(rbx + 0x10) == 0)
            goto label_142853cc6
        
        int64_t rax_12 = sub_1428a6730(*(rbx + 0x18))
        *(r14_1 + rbx + 0x10) = rax_12
        
        if (rax_12 == 0)
            var_28_1 = 0x7e
        else
            *(r14_1 + rbx + 0x18) = *(rbx + 0x18)
            memcpy(rax_12, *(rbx + 0x10), (*(rbx + 0x18)).d)
        label_142853cc6:
            rbp += 1
            rbx += 0x28
            
            if (rbp s< 9)
                continue
            
            if (arg1[0x33] == 0)
                result[0x33] = 0
            label_142853ec9:
                
                if (arg1[0x35] == 0)
                    result[0x35] = 0
                label_142853f2e:
                    result[0x37] = 0
                    int64_t rcx_35 = arg1[0x31]
                    
                    if (rcx_35 == 0)
                        goto label_142853f7b
                    
                    int64_t rax_20 = sub_1428a6af0(rcx_35, arg1[0x32], "ssl\ssl_cert.c", 0xa1)
                    result[0x31] = rax_20
                    
                    if (rax_20 != 0)
                        result[0x32] = arg1[0x32]
                    label_142853f7b:
                        *(result + 0x1c) = *(arg1 + 0x1c)
                        result[0x39] = arg1[0x39]
                        result[0x3a] = arg1[0x3a]
                        void* rcx_36 = arg1[0x3c]
                        
                        if (rcx_36 != 0)
                            sub_14289dce0(rcx_36)
                            result[0x3c] = arg1[0x3c]
                        
                        void* rcx_37 = arg1[0x3b]
                        
                        if (rcx_37 != 0)
                            sub_14289dce0(rcx_37)
                            result[0x3b] = arg1[0x3b]
                        
                        result[0x3f] = arg1[0x3f]
                        result[0x40].d = arg1[0x40].d
                        result[0x41] = arg1[0x41]
                        
                        if (sub_142856190(&result[0x3d], &arg1[0x3d]) != 0)
                            char* rcx_39 = arg1[0x42]
                            int64_t rax_31
                            
                            if (rcx_39 != 0)
                                rax_31 = sub_1428a6ba0(rcx_39)
                                result[0x42] = rax_31
                            
                            if (rcx_39 == 0 || rax_31 != 0)
                                return result
                else
                    int64_t rax_18 = sub_1428a6730(arg1[0x36] * 2)
                    result[0x35] = rax_18
                    
                    if (rax_18 != 0)
                        memcpy(rax_18, arg1[0x35], (arg1[0x36]).d * 2)
                        result[0x36] = arg1[0x36]
                        goto label_142853f2e
            else
                int64_t rax_13 = sub_1428a6730(arg1[0x34] * 2)
                result[0x33] = rax_13
                
                if (rax_13 != 0)
                    memcpy(rax_13, arg1[0x33], (arg1[0x34]).d * 2)
                    result[0x34] = arg1[0x34]
                    goto label_142853ec9
            
            break
    
    sub_1428a5670(0x14, 0xdd, 0x41, "ssl\ssl_cert.c", var_28_1)
    break

result[0x43].d -= 1

if (result[0x43].d s<= 1)
    sub_1428965a0(result[1])
    void* rbx_1 = &result[6]
    int64_t i_1 = 9
    int64_t i
    
    do
        sub_1428a2c50(*(rbx_1 - 0x10))
        void* rcx_19 = *(rbx_1 - 8)
        *(rbx_1 - 0x10) = 0
        sub_1428965a0(rcx_19)
        int32_t* rcx_20 = *rbx_1
        *(rbx_1 - 8) = 0
        sub_142898cb0(rcx_20, sub_1428a2c50)
        int64_t rcx_21 = *(rbx_1 + 8)
        *rbx_1 = 0
        sub_1428a6780(rcx_21)
        *(rbx_1 + 8) = 0
        *(rbx_1 + 0x10) = 0
        rbx_1 += 0x28
        i = i_1
        i_1 -= 1
    while (i != 1)
    sub_1428a6780(result[0x33])
    sub_1428a6780(result[0x35])
    sub_1428a6780(result[0x37])
    sub_1428a6780(result[0x31])
    sub_14289da60(result[0x3c])
    sub_14289da60(result[0x3b])
    sub_142856340(&result[0x3d])
    sub_1428a6780(result[0x42])
    sub_1428a5ba0(result[0x44])
    sub_1428a6780(result)

return nullptr
