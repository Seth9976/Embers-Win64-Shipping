// 函数: sub_1409656f0
// 地址: 0x1409656f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_2 = sx.q(arg2)
int64_t* rax_1 = (*(*arg1 + 0x118))()

if (rax_1 != 0 && (*(*rax_1 + 0x118))(rax_1).b == 0)
    void arg_8
    int64_t rbx = *sub_140b58170(&arg_8, "Voice", 1)
    j_sub_140b3db50()
    int64_t* rax_4 = j_sub_140b407e0(&data_143de7d78, rbx)
    
    if (rax_4[2].b == 0)
        rax_4.b = 0
        return rax_4
    
    int64_t rsi_1 = *rax_4 + 0x48
    char rax_5 = sub_1405949a0()
    int32_t rax_6 = sub_1424378b0()
    void var_28
    int64_t* rax_8 = (*rsi_1)(rax_4, &var_28, zx.q(sub_1424378d0()), zx.q(rax_6), rax_5)
    
    if (&arg1[0x17] != rax_8)
        arg1[0x17] = *rax_8
        *rax_8 = 0
        int64_t rax_10 = rax_8[1]
        int64_t* rbx_2 = arg1[0x18]
        
        if (rax_10 != rbx_2)
            rax_8[1] = 0
            arg1[0x18] = rax_10
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp3_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
    
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t temp1_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_20 + 8))(var_20, 1)
    
    int64_t rax_15 = arg1[0x17]
    rsi_1.b = rax_15 != 0
    
    if (rax_15 != 0)
        (*(*arg1 + 0x170))(arg1)
        int32_t rax_17 = sub_142437060()
        arg1[0x1d].d = 0
        
        if (*(arg1 + 0xec) != rax_17)
            sub_1405c5510(&arg1[0x1c], rax_17)
        
        int32_t rax_18 = sub_1424370f0()
        arg1[0x29].d = 0
        
        if (*(arg1 + 0x14c) != rax_18)
            sub_1405c5510(&arg1[0x28], rax_18)
        
        int64_t i_1 = i_2
        
        if (i_2.d s> 0)
            void* rbx_4 = arg1 + 0x34
            int64_t i
            
            do
                *(rbx_4 - 0x14) = 0
                bool cond:0_1 = *rbx_4 == 0x1000
                *(rbx_4 - 4) = 0
                
                if (not(cond:0_1))
                    sub_1405c5510(rbx_4 - 0xc, 0x1000)
                
                rbx_4 += 0x88
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    return zx.q(rsi_1.b)

rax_1.b = 0
return rax_1
