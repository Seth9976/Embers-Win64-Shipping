// 函数: sub_14243a0c0
// 地址: 0x14243a0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r13 = arg3
void var_58
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_58)
void performanceCount
QueryPerformanceCounter(&performanceCount)
int32_t i_5 = 0

if (r13 != 0)
    *(arg1 + 0x520) = 0
    *(arg1 + 0x528) = 0

int32_t i = 0
int64_t var_88
__builtin_memset(&var_88, 0, 0x20)

if (arg2[0xa].d s> 0)
    int64_t* rbx_1 = nullptr
    
    do
        sub_140a20ba0(&var_88, &data_142e5f8f8, 1)
        int64_t rdx = arg2[9]
        int32_t rax_1 = *(rbx_1 + rdx + 8)
        int32_t r8 = rax_1 - 1
        
        if (rax_1 == 0)
            r8 = 0
        
        sub_140a20ba0(&var_88, *(rbx_1 + rdx), r8)
        i += 1
        rbx_1 = &rbx_1[2]
    while (i s< arg2[0xa].d)

if (sub_142411ce0(arg2, u"load", nullptr) == 0)
    sub_141fa75e0(arg1 + 0x400, arg2)

void* rcx_6 = data_143ddb400
char arg_8 = 1
sub_140af2fd0(rcx_6, u"Kismet", u"bRerunConstructionDuringEditorStreaming", &arg_8, &data_143de5780)
sub_14244a9a0(arg1, 0, 1, arg4)
void* rax_3

if (*(arg1 + 0x11c) s< 0)
    rax_3 = *(arg1 + 0x30)

int64_t var_78
int64_t* r12

if (*(arg1 + 0x11c) s>= 0 || rax_3 == 0 || *(rax_3 + 0xa0) == 0)
    int64_t* rbx_2 = *(arg1 + 0x120)
    
    if (rbx_2 != 0)
        void* rcx_8 = *(arg1 + 0x30)
        int64_t rax_4 = 0
        
        if (rcx_8 != 0)
            int64_t rdx_3
            rdx_3.b = 1
            rax_4 = sub_1420e4e60(rcx_8)
        
        int64_t r8_3 = *rbx_2
        (*(r8_3 + 0x288))(rbx_2, rax_4, r8_3)
    
    int32_t i_1 = 0
    
    if (*(arg1 + 0x150) s> 0)
        int64_t* r14 = nullptr
        
        do
            sub_1420e5cb0(*(r14 + *(arg1 + 0x148)))
            i_1 += 1
            r14 = &r14[1]
        while (i_1 s< *(arg1 + 0x150))
    
    *(arg1 + 0x11d) |= 0x10
    *(arg1 + 0x11c) |= 0x80
    int64_t rcx_12 = data_143f5b298
    
    if (rcx_12 != 0 && sub_1423dde20(rcx_12, arg1) - 1 u<= 1)
        int64_t* rcx_13 = data_143f5b298
        (*(*rcx_13 + 0x3d8))(rcx_13, arg1)
    
    int64_t* rbx_3 = *(arg1 + 0x128)
    int64_t* var_98
    
    if (rbx_3 != 0 && (*(rbx_3 + 0x5b) & 0x20) == 0)
        int64_t rbx_4 = *rbx_3
        int64_t* rax_8 = sub_140b18720(&var_98, &arg2[5], 1)
        (*(rbx_4 + 0x688))(*(arg1 + 0x128), rax_8, &var_88, &var_78)
        int64_t* rcx_16 = var_98
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
    
    int32_t i_2 = 0
    
    if (*(arg1 + 0x150) s> 0)
        int64_t* r14_1 = nullptr
        
        do
            sub_1420ec570(*(r14_1 + *(arg1 + 0x148)))
            i_2 += 1
            r14_1 = &r14_1[1]
        while (i_2 s< *(arg1 + 0x150))
    
    sub_1423ddac0(data_143f5b298, &var_98, arg1)
    int64_t* r8_6 = var_98
    int32_t i_6
    int32_t i_3 = i_6
    
    while (i_3 s>= 0)
        if (i_3 s< r8_6[1].d && *(*r8_6 + (sx.q(i_3) << 3)) == 0)
            i_3 += 1
            i_6 = i_3
            continue
        
        while (i_3 s>= 0)
            if (i_3 s>= r8_6[1].d)
                break
            
            int64_t* rax_11 = sub_14226e280(*(*r8_6 + (sx.q(i_3) << 3)), arg1)
            
            if (rax_11 != 0)
                r12 = 1
                int64_t var_a8 = 0
                int32_t rbx_5 = 0
                int32_t rcx_23 = 0
                int32_t var_a0_1 = 0
                int32_t var_9c_1 = 0
                
                if (*(arg1 + 0x150) s> 1)
                    int64_t* r15_1 = 8
                    
                    while (true)
                        void* r14_2 = *(r15_1 + *(arg1 + 0x148))
                        
                        if (rbx_5 + 1 s> rcx_23)
                            sub_1405c4d20(&var_a8)
                        
                        int64_t* rcx_26 = var_a8 + sx.q(rbx_5) * 0x14
                        int64_t* rbx_6
                        
                        if (rcx_26 == 0)
                            rbx_6 = nullptr
                        else
                            rbx_6 = sub_14225aa60(rcx_26, r14_2, *(r14_2 + 0x1f4) u>> 5 & 1)
                        
                        r12 = zx.q(r12.d + 1)
                        r15_1 = &r15_1[1]
                        *rbx_6 = *sub_142272470(rax_11, &performanceCount, *rbx_6, 0)
                        
                        if (r12.d s>= *(arg1 + 0x150))
                            break
                        
                        rcx_23 = var_9c_1
                        rbx_5 += 1
                    
                    if (rbx_5 + 1 s> 0)
                        sub_14256a910(rax_11, &var_a8)
                    
                    int64_t rcx_30 = var_a8
                    
                    if (rcx_30 != 0)
                        sub_140a74f90(rcx_30)
            
            i_3 = i_6
            r8_6 = var_98
            
            do
                i_3 += 1
                i_6 = i_3
                
                if (i_3 s< 0)
                    goto label_14243a492
                
                if (i_3 s>= r8_6[1].d)
                    break
            while (*(*r8_6 + (sx.q(i_3) << 3)) == 0)
        
        break
    
label_14243a492:
    *(arg1 + 0x11d) &= 0xef
    r13 = arg3

int32_t i_4 = 0

if (*(arg1 + 0x150) s> 0)
    int64_t* r14_3 = nullptr
    
    do
        sub_1420ee880(*(r14_3 + *(arg1 + 0x148)))
        i_4 += 1
        r14_3 = &r14_3[1]
    while (i_4 s< *(arg1 + 0x150))

void* rcx_34 = *(data_143f5b298 + 0x788)

if (rcx_34 != 0)
    int64_t* rcx_35 = *(rcx_34 + 0x40)
    
    if (rcx_35 != 0)
        (*(*rcx_35 + 0x2b0))(rcx_35, 0)

int64_t var_68 = arg1
*(arg1 + 0x5bc) += 1
r12.b = 0
int32_t rax_21 = *(arg1 + 0x5b0)
int32_t rcx_36 = *(arg1 + 0x5bc)
int64_t r14_4 = sx.q(rax_21 - 1)
char var_60 = r13

if (rax_21 - 1 s>= 0)
    int64_t rbx_8 = r14_4 << 4
    int64_t temp1_1
    
    do
        int64_t rcx_37 = *(arg1 + 0x5a8)
        
        if (*(rbx_8 + rcx_37 + 8) == 0)
            r12.b = 1
        else
            int64_t* rcx_38 = *(rbx_8 + rcx_37)
            
            if (rcx_38 == 0)
                r12.b = 1
            else if ((*(*rcx_38 + 0x50))(rcx_38, &var_68) == 0)
                r12.b = 1
        
        rbx_8 -= 0x10
        temp1_1 = r14_4
        r14_4 -= 1
    while (temp1_1 - 1 s>= 0)
    rcx_36 = *(arg1 + 0x5bc)

*(arg1 + 0x5bc) = rcx_36 - 1

if (r12.b != 0)
    sub_140599630(arg1 + 0x5a8, 0)

int64_t* r15_2
r15_2.b = 0
int32_t rdx_16 = data_143a30778
int32_t rcx_41 = data_143a30784 + 1
data_143a30784 = rcx_41
int64_t r14_5 = sx.q(rdx_16 - 1)

if (rdx_16 - 1 s>= 0)
    int64_t rbx_10 = r14_5 << 4
    int64_t temp2_1
    
    do
        int64_t rcx_42 = data_143a30770
        
        if (*(rbx_10 + rcx_42 + 8) == 0)
            r15_2.b = 1
        else
            int64_t* rcx_43 = *(rbx_10 + rcx_42)
            
            if (rcx_43 == 0)
                r15_2.b = 1
            else if ((*(*rcx_43 + 0x50))(rcx_43, &var_68) == 0)
                r15_2.b = 1
        
        rbx_10 -= 0x10
        temp2_1 = r14_5
        r14_5 -= 1
    while (temp2_1 - 1 s>= 0)
    rcx_41 = data_143a30784
    rdx_16 = data_143a30778

data_143a30784 = rcx_41 - 1

if (r15_2.b != 0 && rcx_41 - 1 s<= 0)
    int32_t r15_3 = rdx_16
    int32_t r14_6 = 0
    
    if (rdx_16 s> 0)
        int64_t* rbx_11 = nullptr
        
        do
            int64_t rcx_45 = data_143a30770
            
            if (*(rbx_11 + rcx_45 + 8) == 0)
                sub_1405a4880(&data_143a30770, r14_6, 1, 1)
            else
                int64_t* rcx_46 = *(rbx_11 + rcx_45)
                
                if (rcx_46 == 0)
                    sub_1405a4880(&data_143a30770, r14_6, 1, 1)
                else if ((*(*rcx_46 + 0x20))(rcx_46) != 0)
                    sub_1405a4880(&data_143a30770, r14_6, 1, 1)
                else
                    r14_6 += 1
                    rbx_11 = &rbx_11[2]
            
            rdx_16 = data_143a30778
        while (r14_6 s< rdx_16)
    
    int32_t rax_31 = rdx_16 * 2
    
    if (rax_31 s<= 2)
        rax_31 = 2
    
    data_143a30780 = rax_31
    
    if (r15_3 s> rax_31 && data_143a3077c != rdx_16)
        sub_1405a5410(&data_143a30770, rdx_16)

int64_t* rcx_47 = *(arg1 + 0x120)

if (rcx_47 != 0)
    (*(*rcx_47 + 0x280))(rcx_47)

int64_t* rcx_48 = *(arg1 + 0x138)

if (rcx_48 != 0)
    (*(*rcx_48 + 0x260))(rcx_48, zx.q(r13))

if (*(arg1 + 0x150) s> 0)
    int64_t* r14_7 = nullptr
    
    do
        int64_t rbx_12 = *(r14_7 + *(arg1 + 0x148))
        void*** rax_35 = sub_141f88540()
        void** r8_9 = *rax_35
        r8_9[9](rax_35, rbx_12, r8_9)
        i_5 += 1
        r14_7 = &r14_7[1]
    while (i_5 s< *(arg1 + 0x150))

int64_t rcx_51 = var_78

if (rcx_51 != 0)
    sub_140a74f90(rcx_51)

int64_t rcx_52 = var_88

if (rcx_52 != 0)
    sub_140a74f90(rcx_52)

return pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_58)
