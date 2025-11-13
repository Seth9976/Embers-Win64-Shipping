// 函数: sub_141fa6880
// 地址: 0x141fa6880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596d80(arg1 + 0x4b0)
sub_140596d80(arg1 + 0x4a0)
int64_t result = sub_140596d80(arg1 + 0x490)
int64_t rcx_3 = *(arg1 + 0x480)

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg1 + 0x460)

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = *(arg1 + 0x450)

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int32_t i_3 = *(arg1 + 0x448)
void* rcx_6 = *(arg1 + 0x440)

if (i_3 != 0)
    int64_t* rbx_1 = rcx_6 + 8
    int32_t i
    
    do
        int64_t rcx_7 = *rbx_1
        
        if (rcx_7 != 0)
            result = sub_140a74f90(rcx_7)
        
        rbx_1 = &rbx_1[4]
        i = i_3
        i_3 -= 1
    while (i != 1)
    rcx_6 = *(arg1 + 0x440)

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

void* rcx_10 = *(arg1 + 0x430)
void* rdi = arg1 + 0x438
int32_t i_4 = *rdi

if (i_4 != 0)
    int64_t* rsi_1 = rcx_10 + 0x10
    int32_t i_1
    
    do
        int64_t* rbx_2 = *rsi_1
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                result = (**rbx_2)(rbx_2)
                int32_t temp3_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)
        
        rsi_1 = &rsi_1[4]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    rcx_10 = *(arg1 + 0x430)

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

for (int64_t i_2 = 0x20; i_2 != 0; )
    int64_t rcx_11 = *(rdi - 0x20)
    rdi -= 0x20
    i_2 -= 1
    
    if (rcx_11 != 0)
        result = sub_140a74f90(rcx_11)

int64_t* rbx_3 = *(arg1 + 0x28)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp5_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp5_1 == 1)
            jump(*(*rbx_3 + 8))

return result
