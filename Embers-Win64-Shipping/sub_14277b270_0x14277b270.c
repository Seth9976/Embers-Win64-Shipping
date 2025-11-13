// 函数: sub_14277b270
// 地址: 0x14277b270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ee9830(arg1)
int64_t* result

if (arg1[0x15] == 0)
    result = sub_141ee69e0(arg1)

if (arg1[0x15] != 0 || result != 0)
    void* rax_1 = arg1[0x15]
    
    if (rax_1 == 0)
        rax_1 = sub_141ee69e0(arg1)
    
    result = sub_14243ade0(rax_1)
    
    if (result.b != 0)
        j_sub_140b3db50()
        void arg_8
        arg1[0x87] = sub_140b3dbe0(*sub_140b58170(&arg_8, "ChaosSolvers", 1))
        void*** rax_4 = j_sub_140a82f30(0x98)
        
        if (rax_4 != 0)
            rax_4 = sub_141d2d850(rax_4, arg1)
        
        arg1[0x86] = rax_4
        result = arg1[0x81]
        arg1[0x88].b = 1
        
        if (result != 0)
            int64_t* i = result[5]
            result = sx.q(result[6].d)
            
            for (void* rsi_3 = &i[result * 0xc]; i != rsi_3; i = &i[0xc])
                result = sub_1427795e0(arg1, i)

return result
