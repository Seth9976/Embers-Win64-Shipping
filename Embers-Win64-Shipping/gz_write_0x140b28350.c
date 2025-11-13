// 函数: gz_write
// 地址: 0x140b28350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b19bc0()
void* rbx = &data_1439a4950
void* r9 = data_1439a4990

if (r9 != 0)
    rbx = r9

void* rdi = rbx + (sx.q(data_1439a4998) << 3)
int64_t result

if (rbx == rdi)
label_140b283bf:
    result.b = 0
else
    while (true)
        int64_t* rcx = *rbx
        
        if ((*(*rcx + 8))(rcx, arg1, arg2, arg3).b != 0)
            result.b = 1
            break
        
        rbx += 8
        
        if (rbx == rdi)
            goto label_140b283bf

return result
