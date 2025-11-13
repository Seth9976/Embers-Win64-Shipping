// 函数: sub_140a74ce0
// 地址: 0x140a74ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    jump(*(*arg1[1] + 0x30))

int64_t rax_1 = *arg1
uint64_t count = 0
(*(rax_1 + 0x40))(arg1, arg3, &count)
memset(arg2, 0xdc, count)
data_14399fa50
int32_t rax_4 = sub_140a20af0()
uint64_t rcx_2 = zx.q(rax_4)
void* rax_5

if (rax_4 != 0)
    rax_5 = *((rcx_2 u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(rcx_2.d) & 0x3fff) * 0x18
else
    rax_5 = nullptr

*(rax_5 + 8) = arg2
sub_1405a42f0(&arg1[4 + (zx.q(data_14399fa50) & 3) * 0x11], rcx_2.d)
*(arg1 + 0x14) += ((count + 0x3ff) u>> 0xa).d
int32_t result_1 = arg1[2].d
int32_t result = 0
int32_t rdx_4 = data_14399fa50

if (0 == *(arg1 + 0x14))
    *(arg1 + 0x14) = 0
else
    result = *(arg1 + 0x14)

if (result s> 0x17d78)
    arg1[3].d += 1
    rdx_4 = arg1[3].d + 1
label_140a74e17:
    
    while (true)
        result = sub_140a2d3e0(&arg1[4 + (zx.q(rdx_4 - 1) & 3) * 0x11])
        
        if (result == 0)
            break
        
        char* rdi_1 =
            *(*((zx.q(result) u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(result) & 0x3fff) * 0x18 + 8)
        result = sub_140a24050(result)
        
        if (rdi_1 == 0)
            break
        
        int64_t rax_14 = *arg1
        int64_t arg_10 = 0
        (*(rax_14 + 0x40))(arg1, rdi_1, &arg_10)
        int64_t rcx_13 = arg_10
        int64_t rbx_1 = 0
        
        if (rcx_13 != 0)
            do
                if (rdi_1[rbx_1] != 0xdc)
                    int32_t var_48_1 = 0xdc
                    sub_140a4bcc0(u"Freed memory at %p + %d == %x (should be %x)\r\n", rdi_1)
                    int32_t var_38_1 = 0xdc
                    uint32_t var_40_1 = zx.d(rdi_1[rbx_1])
                    var_48_1.q = rbx_1
                    sub_140af98a0("Unknown", 0x96, Freed memory at %p + %d == %x (should be %x)", 
                        rdi_1)
                    sub_140afbb40()
                    rcx_13 = arg_10
                
                rbx_1 += 1
            while (rbx_1 u< rcx_13)
        
        int64_t* rcx_14 = arg1[1]
        (*(*rcx_14 + 0x30))(rcx_14, rdi_1)
        *(arg1 + 0x14)
        *(arg1 + 0x14) += neg.d(((arg_10 + 0x3ff) u>> 0xa).d)
else if (result_1 != rdx_4)
    result = result_1
    bool z_1
    
    if (result == arg1[2].d)
        arg1[2].d = rdx_4
        z_1 = true
    else
        result = arg1[2].d
        z_1 = false
    
    if (z_1)
        goto label_140a74e17

return result
