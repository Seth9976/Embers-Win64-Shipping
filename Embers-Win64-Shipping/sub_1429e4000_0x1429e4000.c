// 函数: sub_1429e4000
// 地址: 0x1429e4000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x114a] s< 2)
    arg1[0x114b] = 8
else
    int32_t r8_1 = 0xa
    
    if (sub_1429e0b80(arg2, arg3) != 0)
        r8_1 = 0xc
    
    arg1[0x114b] = r8_1

int32_t rax_2
int64_t r9
rax_2, r9 = sub_1429e0bd0(arg2, 3)
arg1[0x58] = rax_2

if (rax_2 == 7)
    int32_t rax_9 = arg1[0x114a] - 1
    arg1[0x59] = 1
    char* r8_2
    
    if ((rax_9 & 0xfffffffd) == 0)
        *(arg1 + 0x180) = 0
    label_1429e4105:
        int32_t rax_10
        rax_10, r9 = sub_1429e0b80(arg2, arg3)
        
        if (rax_10 == 0)
            return rax_10
        
        r8_2 = "Reserved bit set"
    else
        r8_2 = "4:4:4 color not supported in profile 0 or 2"
    
    return sub_1429da010(arg1, 5, r8_2, r9)

arg1[0x59] = sub_1429e0b80(arg2, arg3)
int32_t rax_5 = arg1[0x114a] - 1

if ((rax_5 & 0xfffffffd) != 0)
    arg1[0x60] = 1
    arg1[0x61] = 1
    return rax_5

arg1[0x60] = sub_1429e0b80(arg2, arg3)
int32_t rax_7
int64_t r9_1
rax_7, r9_1 = sub_1429e0b80(arg2, arg3)
bool cond:2_1 = arg1[0x60] != 1
arg1[0x61] = rax_7

if (not(cond:2_1) && rax_7 == 1)
    sub_1429da010(arg1, rax_7 + 4, "4:2:0 color not supported in profile 1 or 3", r9_1)

goto label_1429e4105
