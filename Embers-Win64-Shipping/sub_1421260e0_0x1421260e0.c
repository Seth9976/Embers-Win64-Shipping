// 函数: sub_1421260e0
// 地址: 0x1421260e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x190)
int64_t* rax_7
int32_t rcx_2

if (rcx == 0)
label_142126164:
    rcx_2 = 0
label_142126166:
    int64_t* rax_8 = sub_14210f630(rcx_2)
    int64_t rdx_1 = *rax_8
    rax_7 = (*(rdx_1 + 0x280))(rax_8, rdx_1)
    *arg3 = rax_7
else
    if ((*(*(arg1 + 0x198) + 0xd8) & 1) != 0)
        int64_t* result =
            *(*(arg1 + 0x198) + ((sx.q(arg2) + (sx.q(data_143a30368:0xc.d) << 2)) << 3) + 0x398)
        
        if (result == 0)
            goto label_142126164
        
        if (result[2] != 0)
            return result
        
        rcx_2 = (*(*result + 0x20))(result)
        goto label_142126166
    
    rax_7 = (*(*rcx + 0x280))(rcx)
jump(*(*rax_7 + 0x40))
