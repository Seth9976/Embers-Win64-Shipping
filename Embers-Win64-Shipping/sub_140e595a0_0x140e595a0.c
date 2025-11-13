// 函数: sub_140e595a0
// 地址: 0x140e595a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm1 = sub_140de6810(*arg4, arg3)
int64_t var_38
int64_t* rcx_2 = *sub_140e152a0(*arg4, &var_38)
int64_t rbp

if ((*(*rcx_2 + 0xc0))(rcx_2) != 0)
    rbp.b = 1
else
    TEB* gsbase
    
    if (data_143cd80cc
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143cd80cc)
        
        if (data_143cd80cc == 0xffffffff)
            zmm1 = sub_140af2b60()
            data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
            _Init_thread_footer(&data_143cd80cc)
    
    if (data_143de5426 == 0)
        if (data_143cd80c8 != 0 || *(arg1 + 0x172) != 0)
            rbp.b = 1
        else
            rbp.b = 0
    else if (data_143de5427 == 0 || data_143cd80c8 != 0 || *(arg1 + 0x172) != 0)
        rbp.b = 1
    else
        rbp.b = 0

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

if (rbp.b != 0)
    var_38 = *arg3
    int64_t* rax_8 = arg3[1]
    
    if (rax_8 != 0)
        rax_8[1].d += 1
    
    void*** var_28
    int512_t zmm0_1 = sub_140e71510(arg1, &var_28, &var_38, arg5, zmm1)
    
    if (arg5 != 0)
        sub_140e25670(*arg3, zmm0_1)
        int64_t* rcx_9 = *arg3
        
        if ((*(*rcx_9 + 0x198))(rcx_9) != 0)
            void* rcx_10 = *arg3
            
            if (*(rcx_10 + 0x778) s< 0)
                int64_t* rcx_11 = *sub_140e152a0(rcx_10, &var_38)
                (*(*rcx_11 + 0x90))(rcx_11)
                
                if (rax_8 != 0)
                    rax_8[1].d -= 1
                    
                    if (rax_8[1].d == 1)
                        (**rax_8)(rax_8)
                        int32_t temp9_1 = *(rax_8 + 0xc)
                        *(rax_8 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*(*rax_8 + 8))(rax_8, 1)
    
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t temp7_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*var_20 + 8))(var_20, 1)

*arg2 = *arg3
void* rax_18 = arg3[1]
arg2[1] = rax_18

if (rax_18 != 0)
    *(rax_18 + 8) += 1

int64_t* rbx_4 = arg3[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp4_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

int64_t* rbx_5 = arg4[1]

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        (**rbx_5)(rbx_5)
        int32_t temp6_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_5 + 8))(rbx_5, 1)

return arg2
