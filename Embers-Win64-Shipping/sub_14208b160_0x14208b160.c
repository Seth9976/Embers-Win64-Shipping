// 函数: sub_14208b160
// 地址: 0x14208b160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18
int64_t rbx = *sub_140b58260(&arg_18, u"AssetRegistry", 1)
j_sub_140b3db50()
int64_t* rax_1 = j_sub_140b407e0(&data_143de7d78, rbx)
int64_t rdx_1 = *rax_1
int64_t* rax_2 = (*(rdx_1 + 0x48))(rax_1, rdx_1)
void* var_40 = nullptr
int32_t var_38 = 0
int16_t* rdx_2

if (arg3[1].d == 0)
    rdx_2 = &data_142d40450
else
    rdx_2 = *arg3

int64_t rbx_1 = *rax_2
int64_t* rax_3
int64_t r9
rax_3, r9 = sub_140b58260(&arg_18, rdx_2, 1)
r9.b = 1
(*(rbx_1 + 0x20))(rax_2, *rax_3, &var_40, r9, 1)
void* rbx_2 = var_40
void* i = sx.q(var_38) * 0x50 + rbx_2

if (rbx_2 != i)
    int32_t* rbx_3 = rbx_2 + 8
    
    do
        int64_t var_30
        int64_t var_20
        int64_t* rax_6 = sub_140baad50(&var_30, sub_140b63b70(rbx_3, &var_20))
        int16_t* rdx_6
        
        if (rax_6[1].d == 0)
            rdx_6 = &data_142d40450
        else
            rdx_6 = *rax_6
        
        sub_140b58260(&arg_18, rdx_6, 1)
        int64_t rcx_7 = var_30
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        int64_t rcx_8 = var_20
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        int64_t rax_7 = arg_18
        int32_t r9_2 = sub_140b5ead0(rax_7.d) + rax_7:4.d
        int64_t* rax_12
        
        if (arg4[1].d == *(arg4 + 0x34))
        label_14208b2f6:
            rax_12 = sub_140ae4f80(arg4, r9_2, &arg_18)
        else
            void* rcx_10 = arg4[8]
            void* r8_1 = &arg4[7]
            
            if (rcx_10 != 0)
                r8_1 = rcx_10
            
            int32_t rax_11 = *(r8_1 + (((sx.q(arg4[9].d) - 1) & sx.q(r9_2)) << 2))
            
            if (rax_11 == 0xffffffff)
            label_14208b2f6_1:
                rax_12 = sub_140ae4f80(arg4, r9_2, &arg_18)
            else
                int64_t* rdx_12
                
                while (true)
                    rdx_12 = (sx.q(rax_11) << 5) + *arg4
                    
                    if (*rdx_12 == arg_18)
                        break
                    
                    rax_11 = rdx_12[3].d
                    
                    if (rax_11 == 0xffffffff)
                        goto label_14208b2f6_2
                
                if (rax_11 == 0xffffffff || rdx_12 == 0)
                label_14208b2f6_2:
                    rax_12 = sub_140ae4f80(arg4, r9_2, &arg_18)
                else
                    rax_12 = &rdx_12[1]
        
        sub_140664c50(rax_12, rbx_3)
        rbx_3 = &rbx_3[0x14]
    while (&rbx_3[-2] != i)

return sub_141c94120(&var_40)
