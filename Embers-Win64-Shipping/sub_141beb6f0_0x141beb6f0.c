// 函数: sub_141beb6f0
// 地址: 0x141beb6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x68)

if (rcx != 0)
    *(rcx + 0x20) = zx.d(*(arg1 + 0x48))
    rcx = *(arg1 + 0x68)
    
    if (rcx != 0)
        *(rcx + 0x24) = zx.d(*(arg1 + 0x49))
        rcx = *(arg1 + 0x68)

int128_t zmm1 = *(arg1 + 0x38)
int64_t* rdi = nullptr

if (rcx != 0)
    *(rcx + 0x28) = zmm1
    *(rcx + 0x38) = 1
    char var_28_1 = 1
    int128_t var_38_1 = zmm1
    int64_t var_20 = 0
    int32_t var_18_1 = 0
    sub_140692f90(rcx + 0x40, &var_20)
    sub_140745b20(&var_20)

sub_141be5a70(arg1, zx.q(*(arg1 + 0x4c)))
void* rcx_4 = *(arg1 + 0x68)

if (rcx_4 != 0)
    sub_141bdcfa0(rcx_4, *(arg1 + 0x50))

sub_141be0810(arg1, zx.q(*(arg1 + 0x54)))
void* rcx_6 = *(arg1 + 0x68)

if (rcx_6 != 0)
    sub_141b98a30(rcx_6, *(arg1 + 0x58))
    rcx_6 = *(arg1 + 0x68)

int32_t zmm1_1 = *(arg1 + 0x64)

if (rcx_6 != 0)
    *(rcx_6 + 0x74) = *(arg1 + 0x60)
    *(rcx_6 + 0x78) = zmm1_1
    rcx_6 = *(arg1 + 0x68)

int32_t result = *(arg1 + 0x5c)

if (rcx_6 != 0 && result != *(rcx_6 + 0x70))
    *(rcx_6 + 0x70) = result
    
    if (*(rcx_6 + 0x50) != 0)
        int64_t* rbx_1 = *(rcx_6 + 0x58)
        
        if (rbx_1 != 0)
            result = rbx_1[1].d
            
            if (result s> 0)
                if (rbx_1 != 0)
                    if (result != 0)
                        rbx_1[1].d = result + 1
                        result.b = 1
                    
                    if (result.b == 0)
                        rbx_1 = nullptr
                    
                    if (rbx_1 != 0)
                        rdi = *(rcx_6 + 0x50)
                
                result = sub_140f4adb0(rdi, rcx_6, 1)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        result = (**rbx_1)(rbx_1)
                        int32_t temp1_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
