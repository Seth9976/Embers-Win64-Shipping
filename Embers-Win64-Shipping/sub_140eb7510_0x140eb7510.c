// 函数: sub_140eb7510
// 地址: 0x140eb7510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_48
int64_t* result = sub_140f00d10(*arg2, &var_48)
void* rdx_1 = var_48

if (rdx_1 != 0)
    int64_t* rcx_1 = *(rdx_1 + 0x3f0)
    int64_t r8_1 = 0
    
    if (rcx_1 != 0)
        int32_t rax = rcx_1[1].d
        
        if (rax != 0)
            rcx_1[1].d = rax + 1
            rax.b = 1
        
        if (rax.b == 0)
            rcx_1 = nullptr
        
        if (rcx_1 != 0)
            r8_1 = *(rdx_1 + 0x3e8)
    
    int64_t var_58 = r8_1
    sub_140ebd660()
    void* var_68
    int64_t* var_60
    void* var_38
    
    if (var_58 != data_143e2a070)
        sub_140ebd660()
        int64_t* rsi_1 = data_143e2a070
        sub_140ebee10(rsi_1, &var_68, &var_58)
        int64_t* rbx_1 = var_60
        
        if (var_68 != 0)
            int128_t zmm6 = var_68.o
            var_38.o = zmm6
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            (**rsi_1)(rsi_1, &var_38)
            int64_t* var_30
            
            if (var_30 != 0)
                var_30[1].d -= 1
                
                if (var_30[1].d == 1)
                    (**var_30)(var_30)
                    int32_t temp8_1 = *(var_30 + 0xc)
                    *(var_30 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*var_30 + 8))(var_30, 1)
            
            if (rsi_1[0x44] != 0)
                int64_t* rax_4 = TPI1::cbGpRec(var_68)
                void* rcx_8 = rsi_1[0x44]
                int32_t rax_5 = rax_4[1].d
                var_68 = *rax_4
                var_60.d = rax_5
                
                if (sub_140ec2aa0(rcx_8, &var_68) != 0)
                    int64_t* rcx_9 = rsi_1[0x44]
                    var_38.o = zmm6
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d += 1
                    
                    (**rcx_9)(rcx_9, &var_38)
                    
                    if (var_30 != 0)
                        var_30[1].d -= 1
                        
                        if (var_30[1].d == 1)
                            (**var_30)(var_30)
                            int32_t temp13_1 = *(var_30 + 0xc)
                            *(var_30 + 0xc) -= 1
                            
                            if (temp13_1 == 1)
                                (*(*var_30 + 8))(var_30, 1)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    sub_140ebf640(var_48, &var_68)
    void* rbx_2 = var_68
    
    if (rbx_2 != 0)
        char rax_12 = sub_140e1a330(rbx_2)
        char rax_13
        
        if (rax_12 == 0)
            rax_13 = sub_140e19540(rbx_2)
        
        if (rax_12 != 0 || rax_13 != 0 || *(data_143e29f28 + 0x580) s> 0)
            sub_140de87e0(rbx_2, 0)
    
    void var_28
    void* rcx_19 = *sub_140f02280(*arg2, &var_28)
    var_38 = *arg2
    void* rax_17 = arg2[1]
    void* var_30_1 = rax_17
    
    if (rax_17 != 0)
        *(rax_17 + 8) += 1
    
    sub_140ea49e0(*(rcx_19 + 0x3f0), &var_38)
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t temp7_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*var_20 + 8))(var_20, 1)
    
    sub_140efd640(*arg2)
    sub_140ebd660()
    int64_t r8_3
    r8_3.b = 1
    result = sub_140ede260(data_143e2a070, arg2)
    
    if (var_60 != 0)
        var_60[1].d -= 1
        
        if (var_60[1].d == 1)
            result = (**var_60)(var_60)
            int32_t temp10_1 = *(var_60 + 0xc)
            *(var_60 + 0xc) -= 1
            
            if (temp10_1 == 1)
                result = (*(*var_60 + 8))(var_60, 1)
    
    if (rcx_1 != 0)
        rcx_1[1].d -= 1
        
        if (rcx_1[1].d == 1)
            result = (**rcx_1)(rcx_1)
            int32_t temp11_1 = *(rcx_1 + 0xc)
            *(rcx_1 + 0xc) -= 1
            
            if (temp11_1 == 1)
                result = (*(*rcx_1 + 8))(rcx_1, 1)

int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        result = (**var_40)(var_40)
        int32_t temp1_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*var_40 + 8))(var_40, 1)

return result
