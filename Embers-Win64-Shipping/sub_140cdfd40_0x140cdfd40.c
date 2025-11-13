// 函数: sub_140cdfd40
// 地址: 0x140cdfd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cb2b40()
void* r14_1 = data_143ddb400 + 8
int32_t var_88 = 0xffffffff
int32_t r10 = *(r14_1 + 0x28)
void* r9 = r14_1 + 0x10
void* var_90 = r9
int32_t rcx = 0
int32_t var_98 = 0
int32_t var_94 = 1
int32_t r8 = 0
int64_t var_84 = 0

if (r10 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_140cdfdf8:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_84.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_84:4.d = r8
            var_98 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140cdfdf8
        
        var_84.d = r10

int32_t rdx_5 = *(r14_1 + 0x28)
double zmm2[0x2] = var_88.o
double var_38[0x2] = zmm2
int128_t var_48 = var_98.o
int32_t r15 = 0xffffffff << (rdx_5.b & 0x1f)
int32_t r9_2 = rdx_5 & 0xffffffe0
int32_t r8_3 = rdx_5 s>> 5
int64_t var_58 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_88_1 = r15
var_84.d = rdx_5
int128_t var_78 = r14_1.o
int96_t var_68 = var_48:8.12

if (rdx_5 != r10)
    void* rax_11 = *(r14_1 + 0x20)
    void* r11_1 = r14_1 + 0x10
    
    if (rax_11 != 0)
        r11_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_9 = *(r11_1 + (sx.q(r8_3) << 2)) & r15
    
    if (rdx_9 != 0)
    label_140cdfec4:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_84.d = r9_2 - rbx_1 + 0x1f
        
        if (r9_2 - rbx_1 + 0x1f s> r10)
            var_84.d = r10
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r11_1 + (rcx_5 << 2) + 4)
            var_88_1 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_140cdfec4
        
        var_84.d = r10

while (true)
    int32_t var_5c
    int64_t rax_20 = sx.q(var_5c)
    int64_t rcx_7 = var_78.q
    
    if (rax_20.d == (var_88_1.q u>> 0x20).d && var_68.q == r14_1 + 0x10 && rcx_7 == r14_1)
        void*** rax_23 = sub_140a84c80(0, 0x20, 0)
        
        if (rax_23 != 0)
            *rax_23 = &data_142d40dc0
            rax_23[1] = sub_140cebd30
            rax_23[3] = sub_140a387b0()
            *rax_23 = &data_142d40e18
        
        void arg_8
        
        if (rax_23 != 0)
            sub_140599630(&data_14399fc70, 1)
            (*rax_23)[6](rax_23, &arg_8)
            int64_t rdi_2 = sx.q(data_14399fc78)
            int32_t rax_26 = (rdi_2 + 1).d
            bool cond:3_1 = rax_26 s<= data_14399fc7c
            data_14399fc78 = rax_26
            
            if (not(cond:3_1))
                sub_1405a4f90(&data_14399fc70)
            
            void** rax_29 = (rdi_2 << 4) + data_14399fc70
            *rax_29 = rax_23
            rax_29[1].d = 2
        
        void*** rax_30 = sub_140a84c80(0, 0x20, 0)
        
        if (rax_30 != 0)
            *rax_30 = &data_142d40dc0
            rax_30[1] = sub_140ceba40
            rax_30[3] = sub_140a387b0()
            *rax_30 = &data_142d40e18
        
        if (rax_30 != 0)
            sub_140599630(&data_14399fcd0, 1)
            (*rax_30)[6](rax_30, &arg_8)
            int64_t rdi_3 = sx.q(data_14399fcd8)
            int32_t rax_33 = (rdi_3 + 1).d
            bool cond:4_1 = rax_33 s<= data_14399fcdc
            data_14399fcd8 = rax_33
            
            if (not(cond:4_1))
                sub_1405a4f90(&data_14399fcd0)
            
            void** rax_36 = (rdi_3 << 4) + data_14399fcd0
            *rax_36 = rax_30
            rax_36[1].d = 2
        
        j_sub_140b3db50()
        void*** rax_37 = sub_140a84c80(0, 0x20, 0)
        
        if (rax_37 != 0)
            *rax_37 = &data_142ea6120
            rax_37[1] = sub_140d27770
            rax_37[3] = sub_140a387b0()
            *rax_37 = &data_142ea6178
        
        if (rax_37 != 0)
            sub_140599630(&data_143de80a0, 1)
            (*rax_37)[6](rax_37, &arg_8)
            int64_t rsi_1 = sx.q(data_143de80a8)
            int32_t rax_40 = (rsi_1 + 1).d
            data_143de80a8 = rax_40
            
            if (rax_40 s> data_143de80ac)
                sub_1405a4f90(&data_143de80a0)
            
            void**** rax_43 = (rsi_1 << 4) + data_143de80a0
            *rax_43 = rax_37
            rax_43[1].d = 2
        
        j_sub_140b3db50()
        void*** rax_44 = sub_140a84c80(0, 0x20, 0)
        
        if (rax_44 != 0)
            *rax_44 = &data_142d42b98
            rax_44[1] = sub_140ce11a0
            rax_44[3] = sub_140a387b0()
        
        if (&var_98 != &data_143de80b8)
            if (rax_44 != 0)
                (*rax_44)[8](rax_44, &data_143de80b8)
            else if (data_143de80c0 != 0)
                int64_t* rcx_15 = data_143de80b8
                
                if (rcx_15 != 0)
                    (*(*rcx_15 + 0x38))(rcx_15, 0)
                    int64_t rcx_16 = data_143de80b8
                    
                    if (rcx_16 != 0)
                        data_143de80b8 = sub_140a84c80(rcx_16, 0, 0)
                    
                    data_143de80c0 = 0
        
        if (rax_44 != 0)
            (*rax_44)[7](rax_44, 0)
            int64_t rax_50 = sub_140a84c80(rax_44, 0, 0)
            
            if (rax_50 != 0)
                sub_140a74f90(rax_50)
        
        void*** rax_51 = sub_140a84c80(0, 0x20, 0)
        
        if (rax_51 != 0)
            *rax_51 = &data_142d43dd8
            rax_51[1] = sub_140cc2f50
            rax_51[3] = sub_140a387b0()
            *rax_51 = &data_142d43e30
        
        if (rax_51 != 0)
            sub_140599630(&data_14399fbb0, 1)
            (*rax_51)[6](rax_51, &arg_8)
            int64_t rdi_4 = sx.q(data_14399fbb8)
            int32_t rax_54 = (rdi_4 + 1).d
            bool cond:5_1 = rax_54 s<= data_14399fbbc
            data_14399fbb8 = rax_54
            
            if (not(cond:5_1))
                sub_1405a4f90(&data_14399fbb0)
            
            void**** rax_57 = (rdi_4 << 4) + data_14399fbb0
            *rax_57 = rax_51
            rax_57[1].d = 2
        
        sub_140d30c00()
        uint64_t rbx_9 = *sub_140b58260(&arg_8, u"/Engine/Transient", 1)
        uint32_t rcx_24
        rcx_24.b = (rbx_9 u>> 0x20).d == 0
        
        if ((rcx_24.b & sub_140b5b8a0(rbx_9.d, 0)) != 0)
            sub_140d19010(0, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        void* rax_61 = sub_140d2dfc0(j_sub_140cddea0(), nullptr, rbx_9, 0x40, 0, 0, 0, 0, 0)
        data_143e1b7d0 = rax_61
        int32_t rax_62 = *(rax_61 + 0xc)
        void* const rax_69
        
        if (rax_62 s>= data_143e1d9b4)
            rax_69 = nullptr
        else
            int16_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(rax_62)
            uint32_t rdx_19 = zx.d(temp4_1)
            int32_t rax_64 = temp5_1 + rdx_19
            rax_69 = *(data_143e1d9a0 + (sx.q(rax_64 s>> 0x10) << 3))
                + sx.q(zx.d(rax_64.w) - rdx_19) * 0x18
        
        *(rax_69 + 8) |= 0x40000000
        sub_140af2b60()
        char rax_70 = sub_140b21a10(&data_143dbb3f0, u"VERIFYGC")
        char rcx_30 = data_1439a9d78
        
        if (rax_70 != 0)
            rcx_30 = 1
        
        data_1439a9d78 = rcx_30
        sub_140af2b60()
        char result = sub_140b21a10(&data_143dbb3f0, u"NOVERIFYGC")
        char rcx_31 = data_1439a9d78
        
        if (result != 0)
            rcx_31 = 0
        
        data_1439a9d78 = rcx_31
        return result
    
    int64_t* rbx_3 = rax_20 * 0x158 + *rcx_7
    sub_140be4130(rbx_3)
    sub_140cb2be0(rbx_3)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
