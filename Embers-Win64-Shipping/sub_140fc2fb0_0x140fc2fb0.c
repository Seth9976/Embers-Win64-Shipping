// 函数: sub_140fc2fb0
// 地址: 0x140fc2fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143e2b7d8
data_143e2b7d0 = *arg2
void* rbx = arg2[1]

if (rbx != rcx)
    if (rbx != 0)
        *(rbx + 0xc) += 1
        rcx = data_143e2b7d8
    
    if (rcx != 0)
        int32_t temp2_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rcx + 8))(rcx, 1)
    
    data_143e2b7d8 = rbx

sub_140f2d5b0(*(arg1 + 0x390))
sub_140fc3080(*(arg1 + 0x390), arg2, 1, 3)
sub_140599090(arg1 + 0x410)
int64_t result = sub_140fbbf00(arg1)
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
