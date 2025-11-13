// 函数: sub_140e53d10
// 地址: 0x140e53d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0xd0)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = *(arg1 + 0xc0)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

*(arg1 + 0xa8) = 0
int64_t rcx_4 = *(arg1 + 0xa0)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_140e61f70(arg1 + 0x60, 0)
int64_t rcx_6 = *(arg1 + 0x80)

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = *(arg1 + 0x60)

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t result = sub_140596d80(arg1 + 0x50)
int64_t* rbx_2 = *(arg1 + 0x48)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp6_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp6_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rbx_3 = *(arg1 + 0x38)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp8_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp8_1 == 1)
            result = (*(*rbx_3 + 8))(rbx_3, 1)

int64_t* rbx_4 = *(arg1 + 0x28)

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp10_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp10_1 == 1)
            result = (*(*rbx_4 + 8))(rbx_4, 1)

int64_t* rbx_5 = *(arg1 + 0x10)

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        result = (**rbx_5)(rbx_5)
        int32_t temp11_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp11_1 == 1)
            return (*(*rbx_5 + 8))(rbx_5, 1)

return result
