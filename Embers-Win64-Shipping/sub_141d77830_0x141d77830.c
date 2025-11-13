// 函数: sub_141d77830
// 地址: 0x141d77830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = 0
int32_t var_70 = 0
sub_1405947f0(&var_78, 0x12)
int32_t rax = var_70 + 0x12
var_70 = rax

if (rax s> 0)
    sub_140594770(&var_78)

int64_t rbx = var_78
UnDecorator::getReferenceType(rbx, u"ImageProtocolType", 0x24)
int64_t* var_40
sub_140b75db0(arg2, &var_40, &var_78)

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t* rcx_5 = var_40
int16_t* const r14 = &data_142d40450
int64_t* var_68
int64_t* var_60
int64_t* var_50
int64_t var_30

if (rcx_5 != 0)
    int64_t* rax_1 = sub_140b74df0(rcx_5, &var_50)
    int16_t* rbx_1
    
    if (rax_1[1].d == 0)
        rbx_1 = &data_142d40450
    else
        rbx_1 = *rax_1
    
    void* rax_3 = sub_140d2ee50(sub_140bdf2e0(), nullptr, rbx_1, 0)
    int64_t* rcx_7 = var_50
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    if (rax_3 != 0)
        void* rax_4 = sub_141d82280()
        
        if (rax_4 != 0)
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s<= *(rax_3 + 0x38) && *(*(rax_3 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
                void* rax_7 = sub_141d82280()
                void* const rdx_5
                
                if (rax_7 == 0)
                    rdx_5 = nullptr
                else
                    int64_t rax_8 = sx.q(*(rax_7 + 0x38))
                    
                    if (rax_8.d s> *(rax_3 + 0x38))
                        rdx_5 = nullptr
                    else
                        rdx_5 = rax_3
                        
                        if (*(*(rax_3 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                            rdx_5 = nullptr
                
                sub_140d15b50(&var_30, rdx_5)
                arg1[7] = var_30
                int64_t var_28
                sub_140597df0(&arg1[8], &var_28)
                int64_t rcx_12 = var_28
                
                if (rcx_12 != 0)
                    sub_140a74f90(rcx_12)
                
                sub_141d7c390(arg1)
                
                if (arg1[0xd] != 0)
                    var_78 = 0
                    int32_t var_70_1 = 0
                    sub_1405947f0(&var_78, 0x12)
                    int32_t rax_11 = var_70_1 + 0x12
                    var_70_1 = rax_11
                    
                    if (rax_11 s> 0)
                        sub_140594770(&var_78)
                    
                    int64_t rsi_1 = var_78
                    UnDecorator::getReferenceType(rsi_1, u"ImageProtocolData", 0x24)
                    sub_140b75db0(arg2, &var_68, &var_78)
                    
                    if (rsi_1 != 0)
                        sub_140a74f90(rsi_1)
                    
                    int64_t* rcx_19 = var_68
                    
                    if (rcx_19 != 0)
                        sub_141d48f80(*(**rcx_19)(rcx_19), rax_3, arg1[0xd], 0, 0)
                    
                    int64_t* rbx_3 = var_60
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d -= 1
                        
                        if (rbx_3[1].d == 1)
                            (**rbx_3)(rbx_3)
                            int32_t temp5_1 = *(rbx_3 + 0xc)
                            *(rbx_3 + 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                (*(*rbx_3 + 8))(rbx_3, 1)

var_78 = 0
int32_t var_70_2 = 0
sub_1405947f0(&var_78, 0x12)
int32_t rax_16 = var_70_2 + 0x12
var_70_2 = rax_16

if (rax_16 s> 0)
    sub_140594770(&var_78)

int64_t rbx_4 = var_78
UnDecorator::getReferenceType(rbx_4, u"AudioProtocolType", 0x24)
sub_140b75db0(arg2, &var_50, &var_78)

if (rbx_4 != 0)
    sub_140a74f90(rbx_4)

int64_t* rcx_28 = var_50

if (rcx_28 != 0)
    int16_t** rax_17 = sub_140b74df0(rcx_28, &var_30)
    
    if (rax_17[1].d != 0)
        r14 = *rax_17
    
    void* rax_19 = sub_140d2ee50(sub_140bdf2e0(), nullptr, r14, 0)
    int64_t rcx_30 = var_30
    
    if (rcx_30 != 0)
        sub_140a74f90(rcx_30)
    
    if (rax_19 != 0)
        void* rax_20 = sub_141d82280()
        
        if (rax_20 != 0)
            int64_t rax_21 = sx.q(*(rax_20 + 0x38))
            
            if (rax_21.d s<= *(rax_19 + 0x38)
                    && *(*(rax_19 + 0x30) + (rax_21 << 3)) == rax_20 + 0x30)
                void* rax_23 = sub_141d82280()
                void* const rdx_15
                
                if (rax_23 == 0)
                    rdx_15 = nullptr
                else
                    int64_t rax_24 = sx.q(*(rax_23 + 0x38))
                    
                    if (rax_24.d s> *(rax_19 + 0x38))
                        rdx_15 = nullptr
                    else
                        rdx_15 = rax_19
                        
                        if (*(*(rax_19 + 0x30) + (rax_24 << 3)) != rax_23 + 0x30)
                            rdx_15 = nullptr
                
                sub_140d15b50(&var_68, rdx_15)
                arg1[0xa] = var_68
                sub_140597df0(&arg1[0xb], &var_60)
                int64_t* rcx_35 = var_60
                
                if (rcx_35 != 0)
                    sub_140a74f90(rcx_35)
                
                sub_141d7c390(arg1)
                
                if (arg1[0xe] != 0)
                    var_78 = 0
                    int32_t var_70_3 = 0
                    sub_1405947f0(&var_78, 0x12)
                    int32_t rax_27 = var_70_3 + 0x12
                    var_70_3 = rax_27
                    
                    if (rax_27 s> 0)
                        sub_140594770(&var_78)
                    
                    int64_t rsi_2 = var_78
                    UnDecorator::getReferenceType(rsi_2, u"AudioProtocolData", 0x24)
                    sub_140b75db0(arg2, &var_68, &var_78)
                    
                    if (rsi_2 != 0)
                        sub_140a74f90(rsi_2)
                    
                    int64_t* rcx_42 = var_68
                    
                    if (rcx_42 != 0)
                        sub_141d48f80(*(**rcx_42)(rcx_42), rax_19, arg1[0xe], 0, 0)
                    
                    int64_t* rbx_6 = var_60
                    
                    if (rbx_6 != 0)
                        rbx_6[1].d -= 1
                        
                        if (rbx_6[1].d == 1)
                            (**rbx_6)(rbx_6)
                            int32_t temp7_1 = *(rbx_6 + 0xc)
                            *(rbx_6 + 0xc) -= 1
                            
                            if (temp7_1 == 1)
                                (*(*rbx_6 + 8))(rbx_6, 1)

int64_t result = (*(*arg1 + 0x278))(arg1, arg2)
int64_t* var_48

if (var_48 != 0)
    var_48[1].d -= 1
    
    if (var_48[1].d == 1)
        result = (**var_48)(var_48)
        int32_t temp2_1 = *(var_48 + 0xc)
        *(var_48 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*var_48 + 8))(var_48, 1)

int64_t* var_38

if (var_38 != 0)
    var_38[1].d -= 1
    
    if (var_38[1].d == 1)
        result = (**var_38)(var_38)
        int32_t temp3_1 = *(var_38 + 0xc)
        *(var_38 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*var_38 + 8))(var_38, 1)

return result
