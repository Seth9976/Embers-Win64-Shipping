// 函数: sub_1428abf80
// 地址: 0x1428abf80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
char* result = sub_1428a2e30(arg2, nullptr, 0)

if (result == 0)
    return result

if (*result == 0)
    sub_1428a6780(result)
    return 1

void* rbx = &result[1]
void* rsi = rbx

while (true)
    int32_t rax_2
    
    if (*rbx == 0x2f)
        rax_2 = sub_1428e4710(sx.d(*(rbx + 1)), 2)
    
    if (*rbx == 0x2f && rax_2 != 0)
        char rax_3 = *(rbx + 2)
        
        if (rax_3 == 0x3d)
            goto label_1428ac040
        
        if ((sub_1428e4710(sx.d(rax_3), 2) != 0 && *(rbx + 3) == 0x3d) || *rbx == 0)
            goto label_1428ac040
    else if (*rbx == 0)
    label_1428ac040:
        int32_t rdi_2 = rbx.d - rsi.d
        
        if (sub_14289aa40(arg1, rsi, rdi_2) != rdi_2)
        label_1428ac0b5:
            sub_1428a5670(0xb, 0x75, 7, "crypto\x509\x_name.c", 0x217)
            sub_1428a6780(result)
            return 0
        
        rsi = rbx + 1
        
        if (*rbx == 0)
            sub_1428a6780(result)
            return 1
        
        if (sub_14289aa40(arg1, &data_14321f660, 2) != 2)
            goto label_1428ac0b5
        
        if (*rbx == 0)
            sub_1428a6780(result)
            return 1
    
    rbx += 1
