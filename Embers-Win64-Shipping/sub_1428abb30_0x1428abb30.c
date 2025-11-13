// 函数: sub_1428abb30
// 地址: 0x1428abb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t* r14 = *arg1

if (r14[1].d != 0)
    int32_t* rbx_1 = nullptr
    int32_t rbp_1 = -1
    int32_t* rax_1 = sub_142898ba0()
    int32_t* arg_8 = rax_1
    
    if (rax_1 == 0)
        goto label_1428abcd3
    
    int32_t rsi_1 = 0
    
    if (sub_142898c70(*r14) s> 0)
        while (true)
            void* rax_3 = sub_142898ea0(*r14, rsi_1)
            
            if (*(rax_3 + 0x10) != rbp_1)
                int32_t* rax_4 = sub_142898ba0()
                rbx_1 = rax_4
                
                if (rax_4 == 0)
                    break
                
                if (sub_142898d50(arg_8, rax_4) == 0)
                    sub_142898a10(rbx_1)
                    break
                
                rbp_1 = *(rax_3 + 0x10)
            
            if (sub_142898d50(rbx_1, rax_3) == 0)
                break
            
            rsi_1 += 1
            
            if (rsi_1 s>= sub_142898c70(*r14))
                goto label_1428abc11
        
        goto label_1428abcc4
    
label_1428abc11:
    int64_t rbx_2 = sx.q(sub_1428c6210(&arg_8, nullptr, &data_143504af0, 0xffffffff, 0xffffffff))
    
    if (sub_1428a7260(r14[2], rbx_2) == 0)
    label_1428abcc4:
        rax_1 = arg_8
    label_1428abcd3:
        sub_142898cb0(rax_1, sub_1428ac230)
        sub_1428a5670(0xd, 0xcb, 0x41, "crypto\x509\x_name.c", 0x114)
        return 0xffffffff.d
    
    int64_t var_28 = *(r14[2] + 8)
    sub_1428c6210(&arg_8, &var_28, &data_143504af0, 0xffffffff, 0xffffffff)
    sub_142898cb0(arg_8, sub_1428ac230)
    r14[1].d = 0
    
    if (rbx_2.d s< 0)
        return rbx_2.d
    
    int32_t result = sub_1428ac270(r14)
    
    if (result s< 0)
        return result

int32_t* rdx_5 = r14[2]
int64_t rdi_2 = sx.q(*rdx_5)

if (arg2 != 0)
    memcpy(*arg2, *(rdx_5 + 8), rdi_2.d)
    *arg2 += rdi_2

return rdi_2.d
