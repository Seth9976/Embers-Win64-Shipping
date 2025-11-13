// 函数: sub_14100ed10
// 地址: 0x14100ed10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = arg1[0x15e]
*arg1 = &data_142efd9c0

if (r15 != 0)
    EnterCriticalSection(r15 + 8)
    int64_t* i = *(r15 + 0x30)
    
    for (void* rbp_1 = &i[sx.q(*(r15 + 0x38)) * 3]; i != rbp_1; i = &i[3])
        int64_t* rcx_2 = *i
        (*(*rcx_2 + 0x10))(rcx_2)
    
    *(r15 + 0x38) = 0
    
    if (*(r15 + 0x3c) != 0)
        sub_1405a5130(r15 + 0x30, 0)
    
    if (r15 != -8)
        LeaveCriticalSection(r15 + 8)
    
    int64_t rcx_5 = *(r15 + 0x30)
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    DeleteCriticalSection(r15 + 8)
    j_sub_140a74f90(r15)

void* i_1 = &arg1[0xd8]
arg1[0x15e] = 0

for (; i_1 != &arg1[0xdb]; i_1 += 8)
    void* rcx_8 = *i_1
    
    if (rcx_8 != 0)
        sub_1410161a0(*(rcx_8 + 0x10))
        void* rbp_2 = *i_1
        
        if (rbp_2 != 0)
            void* rsi_1 = *(rbp_2 + 0x10)
            
            if (rsi_1 != 0)
                sub_14101c810(rsi_1)
                int64_t rcx_11 = *(rsi_1 + 0x88)
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
                
                DeleteCriticalSection(rsi_1 + 0x30)
                int64_t rcx_13 = *(rsi_1 + 0x18)
                
                if (rcx_13 != 0)
                    sub_140a74f90(rcx_13)
                
                j_sub_140a74f90(rsi_1)
            
            j_sub_140a74f90(rbp_2)
        
        *i_1 = 0

EnterCriticalSection(&arg1[0x102])
void* rdx_4 = arg1[0x101]

if (rdx_4 != 0)
    sub_141034c30(&arg1[0xfa], rdx_4)
    arg1[0x101] = 0

int32_t i_2 = 0

if (arg1[0x100].d s> 0)
    int64_t* r14_1 = nullptr
    
    do
        void* rbx_2 = *(r14_1 + arg1[0xff])
        
        if (rbx_2 != 0)
            int64_t* rcx_18 = *(rbx_2 + 8)
            
            if (rcx_18 != 0)
                rcx_18[1].d -= 1
                
                if (rcx_18[1].d == 1 && rcx_18 != 0)
                    (**rcx_18)(rcx_18, 1)
            
            j_sub_140a74f90(rbx_2)
        
        i_2 += 1
        r14_1 = &r14_1[1]
    while (i_2 s< arg1[0x100].d)

arg1[0x100].d = 0

if (*(arg1 + 0x804) != 0)
    sub_1405c5570(&arg1[0xff], 0)

LeaveCriticalSection(&arg1[0x102])
sub_141016530(&arg1[0x109])
sub_14101c940(&arg1[0x109])
int64_t* rcx_24 = arg1[7]

if (rcx_24 != 0)
    (**rcx_24)(rcx_24, 1)

int64_t* rcx_25 = arg1[8]

if (rcx_25 != 0)
    (**rcx_25)(rcx_25, 1)

int64_t* rcx_26 = arg1[9]

if (rcx_26 != 0)
    (**rcx_26)(rcx_26, 1)

DeleteCriticalSection(&arg1[0x153])
DeleteCriticalSection(&arg1[0x148])
DeleteCriticalSection(&arg1[0x143])
DeleteCriticalSection(&arg1[0x126])
sub_14100fca0(&arg1[0x109])
DeleteCriticalSection(&arg1[0x102])
int64_t rcx_33 = arg1[0xff]

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)

arg1[0xef].d = 0
int64_t rcx_34 = arg1[0xee]

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

sub_14101ee50(&arg1[0xe6], 0)
int64_t rcx_36 = arg1[0xea]

if (rcx_36 != 0)
    sub_140a74f90(rcx_36)

int64_t rcx_37 = arg1[0xe6]

if (rcx_37 != 0)
    sub_140a74f90(rcx_37)

int64_t rcx_38 = arg1[0xe4]

if (rcx_38 != 0)
    sub_140a74f90(rcx_38)

DeleteCriticalSection(&arg1[0xdf])
int64_t rcx_40 = arg1[0xdd]

if (rcx_40 != 0)
    sub_140a74f90(rcx_40)

int64_t rcx_41 = arg1[0xdb]

if (rcx_41 != 0)
    sub_140a74f90(rcx_41)

sub_14100dc70(&arg1[0xc4])
int64_t rcx_43 = arg1[0xc2]

if (rcx_43 != 0)
    sub_140a74f90(rcx_43)

sub_14100dc70(&arg1[0xab])
int64_t rcx_45 = arg1[0xa9]

if (rcx_45 != 0)
    sub_140a74f90(rcx_45)

sub_14100f1b0(&arg1[0x85])
sub_14100f1b0(&arg1[0x66])
sub_14100f260(&arg1[0x56])
sub_14100f260(&arg1[0x46])
sub_14100f260(&arg1[0x36])
sub_14100f260(&arg1[0x26])
sub_14100f260(&arg1[0x16])
sub_14100e910(&arg1[0xa])
return sub_14100e050(&arg1[5]) __tailcall
