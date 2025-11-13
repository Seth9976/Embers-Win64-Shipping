// 函数: sub_1418aab80
// 地址: 0x1418aab80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8_2 = zx.q(arg1[5].b)

if (r8_2.d u> 5)
    return 

bool cond:0_1
bool cond:1_1

switch (r8_2)
    case 0
        if (r8_2.b == 0)
            arg1[5].b = 0xff
            return sub_14189e230(arg1) __tailcall
    case 1
        cond:0_1 = r8_2.b != 1
    label_1418aabd4:
        
        if (not(cond:0_1))
            arg1[5].b = 0xff
    case 2
        cond:1_1 = r8_2.b != 2
    label_1418aabb7:
        
        if (not(cond:1_1))
            arg1[5].b = 0xff
            int64_t rcx_1 = *arg1
            
            if (rcx_1 != 0)
                return sub_140a74f90(rcx_1) __tailcall
    case 3
        cond:1_1 = r8_2.b != 3
        goto label_1418aabb7
    case 4, 5
        cond:0_1 = r8_2.b != 4
        goto label_1418aabd4
