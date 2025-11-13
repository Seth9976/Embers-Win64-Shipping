// 函数: sub_1428e2400
// 地址: 0x1428e2400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* const rbx = arg2

if (arg2 == 0)
    void* rax_1 = *(arg1 + 0x28)
    rbx = &data_14351356c
    
    if (rax_1 != 0)
        rbx = rax_1

sub_1428df6c0(arg1, "Opening certificate store %s\n", rbx)
int64_t result = CertOpenStore(9, 0, 0, zx.q(*(arg1 + 0x38)), rbx)

if (result != 0)
    return result

int32_t rax_2 = data_143fecca8

if (rax_2 == 0)
    rax_2 = sub_1428a5060()
    data_143fecca8 = rax_2

sub_1428a5670(rax_2, 0x6d, 0x71, "engines\e_capi.c", 0x57b)
sub_1428df7e0()
return result
