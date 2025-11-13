// 函数: sub_1428eddb0
// 地址: 0x1428eddb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
char arg_11 = arg2.b
uint8_t buffer2 = (arg2 u>> 8).b

if (arg3 != 0)
    char arg_12 = *arg3

int32_t rbx = 0
int32_t rbp
rbp.b = arg3 != 0

if (sub_142898c70(arg1) s> 0)
    int32_t rax_6
    
    do
        int64_t* rax_4 = sub_142898ea0(arg1, rbx)
        int32_t* rcx_1 = *rax_4
        
        if (*rcx_1 == rbp + 2 && memcmp(*(rcx_1 + 8), &buffer2, zx.q(rbp + 2)) == 0)
            return rax_4
        
        rbx += 1
        rax_6 = sub_142898c70(arg1)
    while (rbx s< rax_6)

int32_t** rax_7 = sub_1428db530(&data_143514f90)

if (rax_7 != 0)
    int64_t rax_8
    
    if (rax_7[1] == 0)
        rax_8 = sub_1428db530(&data_143514f20)
        rax_7[1] = rax_8
    
    if (rax_7[1] != 0 || rax_8 != 0)
        int32_t* rax_9 = *rax_7
        
        if (rax_9 != 0)
        label_1428ede88:
            
            if (sub_1428e61a0(rax_9, &buffer2, rbp + 2) != 0 && sub_142898d50(arg1, rax_7) != 0)
                return rax_7
        else
            rax_9 = sub_1428c35d0()
            *rax_7 = rax_9
            
            if (rax_9 != 0)
                goto label_1428ede88

sub_1428c3d60(rax_7, &data_143514f90)
return nullptr
