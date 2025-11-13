// 函数: sub_1420e5750
// 地址: 0x1420e5750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg1[0x3f].d

if (i == 0)
    sub_1420f1ad0(arg1)
    sub_1420eebb0(&arg1[0x13])
    i = arg1[0x3f].d

int32_t i_1 = 0
int32_t i_2 = i

for (; i s< arg1[0x14].d; i = arg1[0x3f].d)
    int64_t* rdi_1 = *(arg1[0x13] + (sx.q(i) << 3))
    
    if (rdi_1 == 0)
        arg1[0x3f].d += 1
        *(arg1 + 0x1f7) = 0
    else
        int32_t rax_1 = *(rdi_1 + 0xc)
        void* const rax_5
        
        if (rax_1 s>= data_143e1d9b4)
            rax_5 = nullptr
        else
            uint32_t rdx_1 = zx.d(rax_1.w)
            
            if (rax_1 s< 0)
                rax_1 += 0xffff
                rdx_1 -= 0x10000
            
            rax_5 = *(data_143e1d9a0 + (sx.q(rax_1 s>> 0x10) << 3)) + sx.q(rdx_1) * 0x18
        
        if (((*(rax_5 + 8) u>> 0x1d).b & 1) != 0)
            arg1[0x3f].d += 1
            *(arg1 + 0x1f7) = 0
        else
            if (*(arg1 + 0x1f7) == 0)
                (*(*rdi_1 + 0x4b8))(rdi_1)
                *(arg1 + 0x1f7) = 1
            
            if (sub_141dcd180(rdi_1, arg2, arg4) != 0)
                arg1[0x3f].d += 1
                *(arg1 + 0x1f7) = 0
    
    if (arg2 != 0)
        break

if (arg1[0x3f].d s>= arg1[0x14].d)
    *(arg1 + 0x1f4) |= 2
    arg1[0x3f].d = 0
    *(arg1 + 0x1f7) = 0
    
    if (arg3 != 0 && sub_140d23dc0(arg1, 0x30) == 0)
        if (arg4 != 0)
            sub_141ef0980(arg4)
        
        if (arg1[0x14].d s> 0)
            int64_t* rsi_1 = nullptr
            
            do
                int64_t* rdi_2 = *(rsi_1 + arg1[0x13])
                
                if (rdi_2 != 0 && sub_141dcdf70(rdi_2) == 0)
                    (*(*rdi_2 + 0x518))(rdi_2)
                
                i_1 += 1
                rsi_1 = &rsi_1[1]
            while (i_1 s< arg1[0x14].d)
        
        *(arg1 + 0x1f6) |= 0x10
    
    (*(*arg1 + 0x28))(arg1)

char result = sub_142227bd0()

if (result == 0)
    return result

void arg_8
sub_140cad130(&arg_8)
int32_t rdi_4 = arg1[0x14].d - i_2
int64_t var_50 = sub_142577430()
int64_t* var_30_1 = arg1
int32_t* var_38 = &i_2
int64_t* var_28_1 = &var_50
int64_t (* var_48)(int64_t* arg1, int32_t* arg2) = sub_1420de860
int32_t** var_40_1 = &var_38
sub_14077b750(rdi_4, &var_48, 1)
return sub_140cad790()
