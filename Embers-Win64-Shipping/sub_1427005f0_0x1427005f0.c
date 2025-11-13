// 函数: sub_1427005f0
// 地址: 0x1427005f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_88 = nullptr
int64_t var_80 = 0
sub_1405947f0(&var_88, 0x23)
int32_t r14 = var_80:4.d
int32_t rax = var_80.d + 0x23
var_80.d = rax

if (rax s> r14)
    sub_140594770(&var_88)
    r14 = var_80:4.d

int16_t* rbx = var_88
UnDecorator::getReferenceType(rbx, u"No Source Volume Context/Class set", 0x46)

if (*(arg1 + 0x1f8) == 0)
label_142700751:
    
    if (*(arg1 + 0x200) != 0)
        void* rax_10 = sub_1425bb180()
        
        if (rax_10 != 0)
            void* rdx_4 = *(arg1 + 0x200)
            int64_t rax_11 = sx.q(*(rax_10 + 0x38))
            
            if (rax_11.d s<= *(rdx_4 + 0x38) && *(*(rdx_4 + 0x30) + (rax_11 << 3)) == rax_10 + 0x30
                    && rdx_4 != 0)
                void* rax_13 = sub_1425bb180()
                int64_t rax_14
                void* const r8_6
                
                if (rax_13 != 0)
                    r8_6 = *(arg1 + 0x200)
                    rax_14 = sx.q(*(rax_13 + 0x38))
                
                if (rax_13 == 0 || rax_14.d s> *(r8_6 + 0x38)
                        || *(*(r8_6 + 0x30) + (rax_14 << 3)) != rax_13 + 0x30)
                    r8_6 = nullptr
                
                int64_t var_68
                int16_t** rax_16 = sub_140bdda50(r8_6, &var_68)
                
                if (&var_88 != rax_16)
                    if (rbx != 0)
                        sub_140a74f90(rbx)
                    
                    rbx = *rax_16
                    *rax_16 = nullptr
                    var_80.d = rax_16[1].d
                    rax_16[1] = 0
                    var_88 = rbx
                
                int64_t rcx_14 = var_68
                
                if (rcx_14 != 0)
                    sub_140a74f90(rcx_14)
else
    void* rax_1 = sub_142736ba0()
    
    if (rax_1 == 0)
        goto label_142700751
    
    void* rdx_1 = *(arg1 + 0x1f8)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30
            || rdx_1 == 0)
        goto label_142700751
    
    void var_58
    int64_t* rax_5 = sub_140ac6680(sub_1426d1850(&var_58, rdx_1))
    
    if (&var_88 != rax_5)
        int32_t rdi_1 = rax_5[1].d
        int64_t r12_1 = *rax_5
        var_80.d = rdi_1
        
        if (rdi_1 != 0 || r14 != 0)
            sub_1405a4c70(&var_88, rdi_1, r14)
            rbx = var_88
            memcpy(rbx, r12_1, rdi_1 * 2)
    
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t rax_8 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (rax_8 == 1)
                (*(*var_50 + 8))(var_50, 1)
        
        rbx = var_88

int16_t* const rdi_4 = &data_142d40450
void var_40
int16_t** rax_19 = sub_140ac6680(sub_1426df590(arg1, &var_40))

if (rax_19[1].d != 0)
    rdi_4 = *rax_19

wchar16 const* const rax_20 = u"Simple Bounding Box Test"

if ((*(arg1 + 0x208) & 1) != 0)
    rax_20 = u"Complex Physic Volume Test"

wchar16 const* const var_98 = rax_20
int64_t var_78
sub_140a2e390(&var_78, u"%s : %s (%s)", rdi_4)
sub_140aae2f0(arg2, &var_78)
int64_t rcx_19 = var_78

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int64_t* var_38

if (var_38 != 0)
    var_38[1].d -= 1
    
    if (var_38[1].d == 1)
        (**var_38)(var_38)
        int32_t rsi_1 = *(var_38 + 0xc)
        *(var_38 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_38 + 8))(var_38, zx.q(rsi_1))
    
    rbx = var_88

if (rbx != 0)
    sub_140a74f90(rbx)

return arg2
