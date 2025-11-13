// 函数: sub_1419ba990
// 地址: 0x1419ba990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x58) != 0)
    sub_14198b920(arg1 + 0x58)
    int64_t* rcx_1 = *(arg1 + 0x58)
    *(arg1 + 0x58) = 0
    
    if (rcx_1 != 0)
        rcx_1[9].d -= 1
        
        if (rcx_1[9].d == 1)
            sub_140a2f6e0(rcx_1)

int32_t rax_2 = *(arg1 + 0x3c)
*(arg1 + 0x38) = 0

if (rax_2 s< 0 && rax_2 != 0)
    sub_1405c5570(arg1 + 0x30, 0)

int32_t result = *(arg1 + 0x2c)
int64_t* rbx = *(arg1 + 0x20)
int32_t i_2 = *(arg1 + 0x28)

if (result s< 0)
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t* rcx_4 = *rbx
            
            if (rcx_4 != 0)
                sub_1419aa220(rcx_4)
            
            rbx = &rbx[1]
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = *(arg1 + 0x2c)
    
    *(arg1 + 0x28) = 0
    
    if (result != 0)
        return sub_1405c5570(arg1 + 0x20, 0)
else
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t* rcx_3 = *rbx
            
            if (rcx_3 != 0)
                result = sub_1419aa220(rcx_3)
            
            rbx = &rbx[1]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0x28) = 0

return result
