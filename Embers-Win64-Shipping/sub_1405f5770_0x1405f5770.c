// 函数: sub_1405f5770
// 地址: 0x1405f5770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
*(arg1 + 0x10) += 1
int64_t rbp = *arg2
int64_t* rdi = arg2[1]
int64_t* rbx = rdi

if (rdi != 0)
    rdi[1].d += 1

int64_t* result = j_sub_140a82f30(0x18)
int64_t* result_1 = result

if (result == 0)
    rbp.b = 0
else
    rbx = nullptr
    *result = 0
    result[1] = rbp
    result[2] = rdi
    void** temp0_1 = *(arg1 + 0x20)
    *(arg1 + 0x20) = result
    *temp0_1
    *temp0_1 = result
    rbp.b = 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rdi_1))

if (rbp.b != 0)
    result.b = 1
else
    *(arg1 + 0x10) -= 1
    result.b = 0

return result
