// 函数: sub_141fa64d0
// 地址: 0x141fa64d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141faa400(arg1)
*(arg1 + 0xd0) = 0
int64_t rcx = *(arg1 + 0xc8)

if (rcx != 0)
    sub_140a74f90(rcx)

*(arg1 + 0x90) = 0

if (*(arg1 + 0x94) != 0)
    sub_140638cc0(arg1 + 0x88, 0)

*(arg1 + 0xb8) = 0xffffffff
*(arg1 + 0xbc) = 0
sub_14059a8e0(arg1 + 0x98, 0)
int64_t rcx_3 = *(arg1 + 0xa8)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg1 + 0x88)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t result = sub_141fa5b30(arg1 + 0x78)
int64_t rcx_6 = *(arg1 + 0x68)

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t** rbx_1 = *(arg1 + 0x38)

if (rbx_1 != 0)
    void* rsi_1 = rbx_1[1]
    
    if (rsi_1 != 0)
        sub_141fa6880(rsi_1)
        j_sub_140a74f90(rsi_1)
    
    sub_141fa8b80(rbx_1, *rbx_1)
    result = j_sub_140a74f90(rbx_1)

int64_t** rbx_2 = *(arg1 + 0x30)

if (rbx_2 != 0)
    void* rsi_2 = rbx_2[1]
    
    if (rsi_2 != 0)
        sub_141fa6880(rsi_2)
        j_sub_140a74f90(rsi_2)
    
    sub_141fa8b80(rbx_2, *rbx_2)
    result = j_sub_140a74f90(rbx_2)

int64_t* rbx_3 = *(arg1 + 0x28)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp2_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx_3 + 8))(rbx_3, 1)

int64_t* rbx_4 = *(arg1 + 0x18)

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp3_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_4 + 8))(rbx_4, 1)

return result
