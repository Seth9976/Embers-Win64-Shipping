// 函数: sub_140bd9e40
// 地址: 0x140bd9e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1050)
void var_1058
int64_t rax_1 = __security_cookie ^ &var_1058
int64_t* i = *(arg1 + 0x70)
void* var_28 = nullptr
int32_t var_20 = 0
int32_t var_1c = 0x100
void var_1028

for (; i != 0; i = i[0xb])
    if (((i[8] u>> 0x23).b & 1) == 0)
        int32_t rbp_1 = i[7].d
        int32_t rsi_1 = 0
        
        if (rbp_1 s> 0)
            do
                int32_t var_1030_1 = *(i + 0x3c) * rsi_1 + *(i + 0x4c)
                int64_t rcx = *(i[1] + 0x10)
                void* rax_7
                
                if (not(test_bit(rcx, 0x11)))
                    rax_7.b = (0x1000001000000 & rcx) != 0
                else
                    rax_7.b = *(i + 0x7b) == 0xff
                
                char var_102c_1 = rax_7.b
                uint32_t rax_9 = (*(*i + 0x108))(i)
                uint32_t r9_1
                
                if (rax_9 u< 8)
                    r9_1.b = (rax_9 u>> 1).b - (rax_9 u>> 3).b
                else
                    r9_1.b = 3
                
                char var_102b_1 = r9_1.b
                int64_t rcx_2 = *(i[1] + 0x10)
                
                if ((rcx_2 & 0x120000) == 0)
                    uint8_t var_102a_1 = (divu.dp.d(0:(*(i + 0x3c)), 1 << r9_1.b)).b
                else
                    char var_102a_2
                    
                    if (not(test_bit(rcx_2, 0x11)))
                        if (((*(i[0xf] + 0xb0) u>> 4).b & 1) == 0
                                || divu.dp.d(0:(*(i + 0x3c)), 1 << r9_1.b) u>= 0x10)
                            var_102a_2 = 0
                        else
                            var_102a_1 = (divu.dp.d(0:(*(i + 0x3c)), 1 << r9_1.b)).b
                    else if (*(i + 0x7b) != 0xff)
                        var_102a_2 = 0
                    else
                        var_102a_1 = (divu.dp.d(0:(*(i + 0x3c)), 1 << r9_1.b)).b
                
                int64_t rdi_1 = sx.q(var_20)
                int32_t rax_14 = (rdi_1 + 1).d
                var_20 = rax_14
                
                if (rax_14 s> var_1c)
                    sub_140ca2aa0(&var_1028, rdi_1.d)
                
                void* rcx_5 = &var_1028
                
                if (var_28 != 0)
                    rcx_5 = var_28
                
                rsi_1 += 1
                *(rcx_5 + rdi_1 * 0x10) = i.o
            while (rsi_1 s< rbp_1)

int32_t* result = sub_140a82f30(zx.q((var_20 << 4) + 8), 8)
void* rdx_2 = &var_1028
*result = var_20

if (var_28 != 0)
    rdx_2 = var_28

memcpy(&result[2], rdx_2, var_20 << 4)

if (var_28 != 0)
    sub_140a74f90(var_28)

__security_check_cookie(rax_1 ^ &var_1058)
return result
