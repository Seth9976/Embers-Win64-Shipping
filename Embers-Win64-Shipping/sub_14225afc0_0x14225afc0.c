// 函数: sub_14225afc0
// 地址: 0x14225afc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d21fd0()
sub_1405c2d80(&data_1439aad30, arg1[0x3b])
sub_142281530(arg1)
int64_t* rcx_1 = data_143f52558

if (rcx_1 == 0)
    int64_t* rcx_2 = arg1[0xb]
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)
else
    (*(*rcx_1 + 8))(rcx_1, arg1[0xb])

int64_t* rcx_3 = arg1[0xc]

if (rcx_3 != 0)
    int64_t rax_4 = (*(*rcx_3 + 0x30))(rcx_3)
    
    if (rax_4 != 0)
        int64_t rdx_2 = arg1[0xc]
        
        if (rdx_2 != 0)
            sub_142246c60(data_143f52708, rdx_2 + 0x10)
        
        sub_140920c10(&data_143a2f358, arg1)
        void* r14_1 = arg1[0x22]
        
        if (r14_1 != 0)
            int64_t* rcx_5 = *(r14_1 + 0xd0)
            
            if (rcx_5 != 0)
                rcx_5[9].d -= 1
                
                if (rcx_5[9].d == 1)
                    sub_140a2f6e0(rcx_5)
            
            int64_t i = 2
            void* rdi_1 = r14_1 + 0xa0
            
            do
                rdi_1 -= 0x50
                i -= 1
                *(rdi_1 + 0x48) = 0
                int64_t rcx_6 = *(rdi_1 + 0x40)
                
                if (rcx_6 != 0)
                    sub_140a74f90(rcx_6)
                
                sub_142268a20(rdi_1, 0)
                int64_t rcx_8 = *(rdi_1 + 0x20)
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
                
                int64_t rcx_9 = *rdi_1
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
            while (i != 0)
            
            j_sub_140a74f90(r14_1)
        
        arg1[0x22] = 0
        sub_142246cb0(data_143f52708, rax_4)
        sub_142246c10(data_143f52708, arg1[0x18])
        sub_142246b50(data_143f52708, arg1[0x19])
        sub_142246bb0(data_143f52708, arg1[0x1b])
        sub_142249870(data_143f52708)
        arg1[0xc] = 0

sub_142246b00(data_143f52708, arg1[0x17])
int64_t rcx_17 = arg1[0x14]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)
    arg1[0x14] = 0
    arg1[0x15].d = 0

int64_t rcx_18 = arg1[0x39]

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

sub_1405ae080(&arg1[0x2f])
sub_1405ae080(&arg1[0x25])
int64_t rcx_21 = arg1[0x23]

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int32_t i_2 = arg1[0x1f].d
int64_t* rdi_2 = arg1[0x1e]

if (i_2 != 0)
    int32_t i_1
    
    do
        sub_140745b20(rdi_2)
        rdi_2 = &rdi_2[3]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rdi_2 = arg1[0x1e]

if (rdi_2 != 0)
    sub_140a74f90(rdi_2)

sub_14222ac10(&arg1[0x1c])
int64_t* rcx_25 = arg1[0x13]

if (rcx_25 != 0)
    rcx_25[9].d -= 1
    
    if (rcx_25[9].d == 1)
        sub_140a2f6e0(rcx_25)

int64_t* rcx_26 = arg1[0x12]

if (rcx_26 != 0)
    rcx_26[9].d -= 1
    
    if (rcx_26[9].d == 1)
        sub_140a2f6e0(rcx_26)

int64_t* rcx_27 = arg1[0x11]

if (rcx_27 != 0)
    rcx_27[9].d -= 1
    
    if (rcx_27[9].d == 1)
        sub_140a2f6e0(rcx_27)

sub_140596eb0(&arg1[6])
sub_140596eb0(&arg1[3])
return sub_140596eb0(arg1) __tailcall
