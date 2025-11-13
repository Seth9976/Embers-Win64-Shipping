// 函数: sub_1413de7c0
// 地址: 0x1413de7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_1439c97c8 = 1
data_1439c97c6 = 1
int64_t rbx = *(data_143f5b298 + 0x28)
sub_140b19e60()
(*(rbx + 8))(data_143f5b298 + 0x28, 0, u"rhi.DumpMemory", &data_1439a8bd0)
void*** rax_1 = sub_140a84c80(0, 0x30, 0)
void*** var_48 = rax_1
void*** rdi = rax_1

if (rax_1 != 0)
    *rdi = &data_142f79038
    void arg_10
    rdi[1] = &arg_10
    rdi[2] = sub_1413ffb10
    rdi[4] = sub_140a387b0()
    *rdi = &data_142f79090

void var_38
int64_t* rax_3 = sub_140958da0(&var_38, nullptr, 0xff)
int64_t* rbx_2 = *rax_3 + 0x10
*rbx_2 = 0
rbx_2[1].d = 0

if (&var_48 != rbx_2 && rdi != 0)
    void** r8_1 = *rdi
    r8_1[8](rdi, rbx_2, r8_1)

rbx_2[2].d = 2
void* rcx_5 = *rax_3
int32_t r8_2 = rax_3[2].d
int64_t* rdx_2 = rax_3[1]
int64_t* rbx_3 = *(rcx_5 + 0x30)
int64_t* arg_20 = rbx_3
int32_t* rsi_1 = &rbx_3[9]

if (rbx_3 != 0)
    *rsi_1 += 1
    rdi = var_48
    rbx_3 = arg_20

uint64_t result = sub_140978a40(rcx_5, rdx_2, r8_2, 1)

if (rbx_3 != 0)
    result = zx.q(*rsi_1)
    *rsi_1 -= 1
    
    if (result.d == 1)
        result = sub_140a2f6e0(arg_20)
    
    rdi = var_48

if (rdi != 0)
    (*rdi)[7](rdi, 0)
    result = sub_140a84c80(rdi, 0, 0)
    
    if (result != 0)
        return sub_140a74f90(result)

return result
