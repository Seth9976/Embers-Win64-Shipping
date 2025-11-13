// 函数: sub_140ffd4e0
// 地址: 0x140ffd4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x14)
int64_t* rbx = *(arg1 + 8)
int32_t i_2 = *(arg1 + 0x10)

if (rax s< 0)
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t* rcx_1 = *rbx
            
            if (rcx_1 != 0)
                rcx_1[1].d -= 1
                
                if (rcx_1[1].d == 1)
                    (**rcx_1)(rcx_1, 1)
            
            rbx = &rbx[1]
            i = i_2
            i_2 -= 1
        while (i != 1)
        rax = *(arg1 + 0x14)
    
    *(arg1 + 0x10) = 0
    
    if (rax != 0)
        sub_1405c5570(arg1 + 8, 0)
else
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t* rcx = *rbx
            
            if (rcx != 0)
                rcx[1].d -= 1
                
                if (rcx[1].d == 1)
                    (**rcx)(rcx, 1)
            
            rbx = &rbx[1]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0x10) = 0

int64_t* rcx_3 = *(*(arg1 + 0x70) + 0x150)
int64_t result = (*(*rcx_3 + 0xd8))(rcx_3, *(arg1 + 0x68))

if (data_143f0f161 != 0 && *(arg1 + 0x50) == 0)
    int64_t rbx_1 = sx.q(mods.dp.d(sx.q(*(arg1 + 0x34) + 1), *(arg1 + 0x30)))
    int64_t* rcx_4 = *(*(arg1 + 0x28) + 0x150)
    int64_t r8_1 = *rcx_4
    result = (*(r8_1 + 0xe0))(rcx_4, *(*(arg1 + 0x40) + (rbx_1 << 3)), r8_1)
    *(arg1 + 0x34) = rbx_1.d
    *(arg1 + 0x50) = 1

return result
