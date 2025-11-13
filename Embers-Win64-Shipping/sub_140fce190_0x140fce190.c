// 函数: sub_140fce190
// 地址: 0x140fce190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = nullptr
int64_t* arg_18 = nullptr
sub_140af2b60()
int64_t rdi

if (sub_140b21a10(&data_143dbb3f0, u"d3ddebug") != 0)
    rdi.b = 1
else
    sub_140af2b60()
    
    if (sub_140b21a10(&data_143dbb3f0, u"d3debug") != 0)
        rdi.b = 1
    else
        sub_140af2b60()
        
        if (sub_140b21a10(&data_143dbb3f0, u"dxdebug") != 0)
            rdi.b = 1
        else
            rdi.b = 0

int64_t* rcx = arg_18

if (rcx != 0)
    (*(*rcx + 0x10))(rcx)

sub_140ffcc00(&arg_18, rdi.b)
void*** rax_4 = j_sub_140a82f30(0x17f38)

if (rax_4 != 0)
    result = sub_140fd8670(rax_4, arg_18, *(arg1 + 0xc), *(arg1 + 8), arg1 + 0x10)

int64_t* rcx_4 = arg_18
data_143e2b8b8 = result

if (rcx_4 != 0)
    (*(*rcx_4 + 0x10))(rcx_4)

return result
